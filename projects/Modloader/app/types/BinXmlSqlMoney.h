#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinXmlSqlMoney__Class.h>
#include <Modloader/app/structs/BinXmlSqlMoney.h>
#include <Modloader/app/structs/BinXmlSqlMoney__Boxed.h>

namespace app::classes::types {
    namespace BinXmlSqlMoney {
        namespace {
            inline app::BinXmlSqlMoney__Class* type_info_ref = nullptr;
        }
        inline app::BinXmlSqlMoney__Class** type_info = &type_info_ref;
        inline app::BinXmlSqlMoney__Class* get_class() {
            return il2cpp::get_class<app::BinXmlSqlMoney__Class>(type_info, "System.Xml", "BinXmlSqlMoney");
        }
        inline app::BinXmlSqlMoney* create() {
            return il2cpp::create_object<app::BinXmlSqlMoney>(get_class());
        }
        inline app::BinXmlSqlMoney__Boxed* box(app::BinXmlSqlMoney value) {
            return il2cpp::box_value<app::BinXmlSqlMoney__Boxed>(get_class(), value);
        }
    } // namespace BinXmlSqlMoney
} // namespace app::classes::types
