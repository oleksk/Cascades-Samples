/* Copyright (c) 2012, 2013  BlackBerry Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef SQLMODEL_HPP
#define SQLMODEL_HPP

#include <bb/cascades/QListDataModel>

/**
 * The SQL model makes the content of a SQLite database file available as a Cascades data model.
 */
class SqlModel : public bb::cascades::QListDataModel<QVariantMap>
{

public:
    // The factory method that returns a data model for the given file name
    static SqlModel* fromSQLAsset(const QString &fileName);
};

#endif
