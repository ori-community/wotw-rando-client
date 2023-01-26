#pragma once
#include <Modloader/app/structs/MoonAnimator_ClipInstance.h>
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_ClipInstance {
        inline app::MoonAnimator_ClipInstance__Class** type_info() {
            static app::MoonAnimator_ClipInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_ClipInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_ClipInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_ClipInstance__Class>(type_info(), "Moon", "MoonAnimator", "ClipInstance");
        }
        inline app::MoonAnimator_ClipInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_ClipInstance>(get_class());
        }
        inline app::MoonAnimator_ClipInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_ClipInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_ClipInstance__Array* create_array(const std::vector<app::MoonAnimator_ClipInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_ClipInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_ClipInstance
} // namespace app::classes::types
