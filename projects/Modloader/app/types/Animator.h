#pragma once
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Animator__Array.h>
#include <Modloader/app/structs/Animator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Animator {
        inline app::Animator__Class** type_info() {
            static app::Animator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Animator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Animator__Class* get_class() {
            return il2cpp::get_class<app::Animator__Class>(type_info(), "UnityEngine", "Animator");
        }
        inline app::Animator* create() {
            return il2cpp::create_object<app::Animator>(get_class());
        }
        inline app::Animator__Array* create_array(int size) {
            return il2cpp::array_new<app::Animator__Array>(get_class(), size);
        }
        inline app::Animator__Array* create_array(const std::vector<app::Animator*>& items) {
            return il2cpp::array_new<app::Animator__Array>(get_class(), items);
        }
    } // namespace Animator
} // namespace app::classes::types
