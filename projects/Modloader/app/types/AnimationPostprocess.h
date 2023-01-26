#pragma once
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/AnimationPostprocess__Array.h>
#include <Modloader/app/structs/AnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocess {
        inline app::AnimationPostprocess__Class** type_info() {
            static app::AnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocess__Class>(type_info(), "Moon", "AnimationPostprocess");
        }
        inline app::AnimationPostprocess* create() {
            return il2cpp::create_object<app::AnimationPostprocess>(get_class());
        }
        inline app::AnimationPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocess__Array>(get_class(), size);
        }
        inline app::AnimationPostprocess__Array* create_array(const std::vector<app::AnimationPostprocess*>& items) {
            return il2cpp::array_new<app::AnimationPostprocess__Array>(get_class(), items);
        }
    } // namespace AnimationPostprocess
} // namespace app::classes::types
