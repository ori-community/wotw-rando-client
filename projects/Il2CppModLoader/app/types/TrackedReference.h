#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackedReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrackedReference__Class** type_info;
        inline app::TrackedReference__Class* get_class() {
            return il2cpp::get_class<app::TrackedReference__Class>(type_info, "UnityEngine", "TrackedReference");
        }
        inline app::TrackedReference* create() {
            return il2cpp::create_object<app::TrackedReference>(get_class());
        }
    } // namespace TrackedReference
} // namespace app::classes::types
