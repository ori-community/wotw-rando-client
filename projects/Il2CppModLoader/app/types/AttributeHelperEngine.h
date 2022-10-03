#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeHelperEngine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeHelperEngine__Class** type_info;
        inline app::AttributeHelperEngine__Class* get_class() {
            return il2cpp::get_class<app::AttributeHelperEngine__Class>(type_info, "UnityEngine", "AttributeHelperEngine");
        }
        inline app::AttributeHelperEngine* create() {
            return il2cpp::create_object<app::AttributeHelperEngine>(get_class());
        }
    } // namespace AttributeHelperEngine
} // namespace app::classes::types
