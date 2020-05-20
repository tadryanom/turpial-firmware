/**
 * Copyright 2020 btcven and Locha Mesh developers
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** 
 * @file ErrUtil.h
 * @author Locha Mesh Developers (contact@locha.io)
 * 
 */


#ifndef UTIL_ERRUTIL_H
#define UTIL_ERRUTIL_H

#include <esp_err.h>
#include <esp_log.h>

#define ESP_ERR_TRY(expr)     \
    do {                      \
        esp_err_t err = expr; \
        if (err != ESP_OK) {  \
            return err;       \
        }                     \
    } while (false)

#endif // UTIL_ERRUTIL_H
