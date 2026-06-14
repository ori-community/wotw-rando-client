#pragma once
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance.h>
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_DirectBlendInstance {
        inline app::MoonAnimator_DirectBlendInstance__Class** type_info() {
            static app::MoonAnimator_DirectBlendInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_DirectBlendInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_DirectBlendInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_DirectBlendInstance__Class>(type_info(), "Moon", "MoonAnimator", "DirectBlendInstance");
        }
        inline app::MoonAnimator_DirectBlendInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_DirectBlendInstance>(get_class());
        }
        inline app::MoonAnimator_DirectBlendInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_DirectBlendInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_DirectBlendInstance__Array* create_array(const std::vector<app::MoonAnimator_DirectBlendInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_DirectBlendInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_DirectBlendInstance
} // namespace app::classes::types
