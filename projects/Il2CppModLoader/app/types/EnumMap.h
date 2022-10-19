#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumMap {
        inline app::EnumMap__Class** type_info = (app::EnumMap__Class**)(modloader::win::memory::resolve_rva(0x0476E398));
        inline app::EnumMap__Class* get_class() {
            return il2cpp::get_class<app::EnumMap__Class>(type_info, "System.Xml.Serialization", "EnumMap");
        }
        inline app::EnumMap* create() {
            return il2cpp::create_object<app::EnumMap>(get_class());
        }
    } // namespace EnumMap
} // namespace app::classes::types
