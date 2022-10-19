#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XCData {
        inline app::XCData__Class** type_info = (app::XCData__Class**)(modloader::win::memory::resolve_rva(0x047046D8));
        inline app::XCData__Class* get_class() {
            return il2cpp::get_class<app::XCData__Class>(type_info, "System.Xml.Linq", "XCData");
        }
        inline app::XCData* create() {
            return il2cpp::create_object<app::XCData>(get_class());
        }
    } // namespace XCData
} // namespace app::classes::types
