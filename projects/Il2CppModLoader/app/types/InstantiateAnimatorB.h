#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateAnimatorB {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateAnimatorB__Class** type_info;
        inline app::InstantiateAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAnimatorB__Class>(type_info, "", "InstantiateAnimatorB");
        }
        inline app::InstantiateAnimatorB* create() {
            return il2cpp::create_object<app::InstantiateAnimatorB>(get_class());
        }
    } // namespace InstantiateAnimatorB
} // namespace app::classes::types
