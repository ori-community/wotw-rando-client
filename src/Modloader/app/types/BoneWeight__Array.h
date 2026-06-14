#pragma once
#include <Modloader/app/structs/BoneWeight__Array.h>
#include <Modloader/app/structs/BoneWeight__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoneWeight__Array {
        inline app::BoneWeight__Array__Class** type_info() {
            static app::BoneWeight__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoneWeight__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoneWeight__Array__Class* get_class() {
            return il2cpp::get_class<app::BoneWeight__Array__Class>(type_info(), "UnityEngine", "BoneWeight[]");
        }
        inline app::BoneWeight__Array* create() {
            return il2cpp::create_object<app::BoneWeight__Array>(get_class());
        }
    } // namespace BoneWeight__Array
} // namespace app::classes::types
