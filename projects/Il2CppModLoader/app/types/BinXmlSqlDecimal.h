#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinXmlSqlDecimal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinXmlSqlDecimal__Class** type_info;
        inline app::BinXmlSqlDecimal__Class* get_class() {
            return il2cpp::get_class<app::BinXmlSqlDecimal__Class>(type_info, "System.Xml", "BinXmlSqlDecimal");
        }
        inline app::BinXmlSqlDecimal* create() {
            return il2cpp::create_object<app::BinXmlSqlDecimal>(get_class());
        }
        inline app::BinXmlSqlDecimal__Boxed* box(app::BinXmlSqlDecimal value) {
            return il2cpp::box_value<app::BinXmlSqlDecimal__Boxed>(get_class(), value);
        }
    } // namespace BinXmlSqlDecimal
} // namespace app::classes::types
