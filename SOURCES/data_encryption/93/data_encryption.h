/*
 * Transparent Data Encryption for PostgreSQL Free Edition
 *
 * Copyright (c) 2015 NEC Corporation
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define KEY_HASH_TABLE_NAME  "key_hash_table"

/* structure for maintain encryption key information */
typedef struct {
	char           *key;          /* encryption key */
	char           *algorithm;    /* encryption algorithm */
}key_info;
