/*-
 * SPDX-License-Identifier: CC0-1.0
 *
 * Written in 2021 by Alfonso Sabato Siciliano.
 * To the extent possible under law, the author has dedicated all copyright
 * and related and neighboring rights to this software to the public domain
 * worldwide. This software is distributed without any warranty, see:
 *   <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#include <stdio.h>
#include <string.h>

#include <bsddialog.h>

int main()
{
	int output;
	struct bsddialog_conf conf;

	bsddialog_initconf(&conf);
	conf.title = "infobox";
	
	if (bsddialog_init() < 0)
		return -1;

	output = bsddialog_infobox(conf, "Example", 7, 20);

	bsddialog_end();

	return output;
}
