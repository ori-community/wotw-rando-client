#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationSetupGroup {
        inline app::SerializationSetupGroup__Class** type_info = (app::SerializationSetupGroup__Class**)(modloader::win::memory::resolve_rva(0x04771060));
        inline app::SerializationSetupGroup__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupGroup__Class>(type_info, "", "SerializationSetupGroup");
        }
        inline app::SerializationSetupGroup* create() {
            return il2cpp::create_object<app::SerializationSetupGroup>(get_class());
        }
    } // namespace SerializationSetupGroup
} // namespace app::classes::types
