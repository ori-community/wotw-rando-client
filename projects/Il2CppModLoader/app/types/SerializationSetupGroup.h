#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationSetupGroup__Class** type_info;
        inline app::SerializationSetupGroup__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupGroup__Class>(type_info, "", "SerializationSetupGroup");
        }
        inline app::SerializationSetupGroup* create() {
            return il2cpp::create_object<app::SerializationSetupGroup>(get_class());
        }
    } // namespace SerializationSetupGroup
} // namespace app::classes::types
