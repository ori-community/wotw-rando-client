#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_LocalityName {
        inline app::X520_LocalityName__Class** type_info = (app::X520_LocalityName__Class**)(modloader::win::memory::resolve_rva(0x04778ED0));
        inline app::X520_LocalityName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_LocalityName__Class>(type_info, "Mono.Security.X509", "X520", "LocalityName");
        }
        inline app::X520_LocalityName* create() {
            return il2cpp::create_object<app::X520_LocalityName>(get_class());
        }
    } // namespace X520_LocalityName
} // namespace app::classes::types
