#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XCData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XCData__Class** type_info;
        inline app::XCData__Class* get_class() {
            return il2cpp::get_class<app::XCData__Class>(type_info, "System.Xml.Linq", "XCData");
        }
        inline app::XCData* create() {
            return il2cpp::create_object<app::XCData>(get_class());
        }
    } // namespace XCData
} // namespace app::classes::types
