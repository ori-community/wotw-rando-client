#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPassiveStateDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPassiveStateDescriptor__Class** type_info;
        inline app::IPassiveStateDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IPassiveStateDescriptor__Class>(type_info, "", "IPassiveStateDescriptor");
        }
        inline app::IPassiveStateDescriptor* create() {
            return il2cpp::create_object<app::IPassiveStateDescriptor>(get_class());
        }
    } // namespace IPassiveStateDescriptor
} // namespace app::classes::types
