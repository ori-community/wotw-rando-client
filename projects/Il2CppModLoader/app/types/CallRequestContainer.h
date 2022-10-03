#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallRequestContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallRequestContainer__Class** type_info;
        inline app::CallRequestContainer__Class* get_class() {
            return il2cpp::get_class<app::CallRequestContainer__Class>(type_info, "PlayFab.Internal", "CallRequestContainer");
        }
        inline app::CallRequestContainer* create() {
            return il2cpp::create_object<app::CallRequestContainer>(get_class());
        }
        inline app::CallRequestContainer__Array* create_array(int size) {
            return il2cpp::array_new<app::CallRequestContainer__Array>(get_class(), size);
        }
    } // namespace CallRequestContainer
} // namespace app::classes::types
