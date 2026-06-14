#pragma once
#include <Modloader/app/structs/BinXmlToken__Enum.h>
#include <Modloader/app/structs/BinXmlToken__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinXmlToken__Enum {
        inline app::BinXmlToken__Enum__Class** type_info() {
            static app::BinXmlToken__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BinXmlToken__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BinXmlToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinXmlToken__Enum__Class>(type_info(), "System.Xml", "BinXmlToken");
        }
        inline app::BinXmlToken__Enum* create() {
            return il2cpp::create_object<app::BinXmlToken__Enum>(get_class());
        }
    } // namespace BinXmlToken__Enum
} // namespace app::classes::types
