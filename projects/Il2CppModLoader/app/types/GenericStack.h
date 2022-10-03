#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericStack__Class** type_info;
        inline app::GenericStack__Class* get_class() {
            return il2cpp::get_class<app::GenericStack__Class>(type_info, "UnityEngineInternal", "GenericStack");
        }
        inline app::GenericStack* create() {
            return il2cpp::create_object<app::GenericStack>(get_class());
        }
    } // namespace GenericStack
} // namespace app::classes::types
