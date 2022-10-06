#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScriptableObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScriptableObject__Class** type_info;
        inline app::ScriptableObject__Class* get_class() {
            return il2cpp::get_class<app::ScriptableObject__Class>(type_info, "UnityEngine", "ScriptableObject");
        }
        inline app::ScriptableObject* create() {
            return il2cpp::create_object<app::ScriptableObject>(get_class());
        }
        inline app::ScriptableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::ScriptableObject__Array>(get_class(), size);
        }
        inline app::ScriptableObject__Array* create_array(const std::vector<app::ScriptableObject*>& items) {
            return il2cpp::array_new<app::ScriptableObject__Array>(get_class(), items);
        }
    } // namespace ScriptableObject
} // namespace app::classes::types
