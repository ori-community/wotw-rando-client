#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoneWeight__Array {
        namespace {
            app::BoneWeight__Array__Class* type_info_ref = nullptr;
        }
        app::BoneWeight__Array__Class** type_info = &type_info_ref;
        inline app::BoneWeight__Array__Class* get_class() {
            return il2cpp::get_class<app::BoneWeight__Array__Class>(type_info, "UnityEngine", "BoneWeight[]");
        }
        inline app::BoneWeight__Array* create() {
            return il2cpp::create_object<app::BoneWeight__Array>(get_class());
        }
    } // namespace BoneWeight__Array
} // namespace app::classes::types
