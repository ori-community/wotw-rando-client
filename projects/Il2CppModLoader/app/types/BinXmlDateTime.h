#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinXmlDateTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinXmlDateTime__Class** type_info;
        inline app::BinXmlDateTime__Class* get_class() {
            return il2cpp::get_class<app::BinXmlDateTime__Class>(type_info, "System.Xml", "BinXmlDateTime");
        }
        inline app::BinXmlDateTime* create() {
            return il2cpp::create_object<app::BinXmlDateTime>(get_class());
        }
    } // namespace BinXmlDateTime
} // namespace app::classes::types
