#pragma once
#include <Modloader/app/structs/BinXmlSqlDecimal.h>
#include <Modloader/app/structs/BinXmlSqlDecimal__Boxed.h>
#include <Modloader/app/structs/BinXmlSqlDecimal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinXmlSqlDecimal {
        inline app::BinXmlSqlDecimal__Class** type_info() {
            static app::BinXmlSqlDecimal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinXmlSqlDecimal__Class**)(modloader::win::memory::resolve_rva(0x04717358));
            }
            return cache;
        }
        inline app::BinXmlSqlDecimal__Class* get_class() {
            return il2cpp::get_class<app::BinXmlSqlDecimal__Class>(type_info(), "System.Xml", "BinXmlSqlDecimal");
        }
        inline app::BinXmlSqlDecimal* create() {
            return il2cpp::create_object<app::BinXmlSqlDecimal>(get_class());
        }
        inline app::BinXmlSqlDecimal__Boxed* box(app::BinXmlSqlDecimal value) {
            return il2cpp::box_value<app::BinXmlSqlDecimal__Boxed>(get_class(), value);
        }
    } // namespace BinXmlSqlDecimal
} // namespace app::classes::types
