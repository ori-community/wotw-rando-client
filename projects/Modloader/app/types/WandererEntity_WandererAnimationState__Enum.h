#pragma once
#include <Modloader/app/structs/WandererEntity_WandererAnimationState__Enum.h>
#include <Modloader/app/structs/WandererEntity_WandererAnimationState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererEntity_WandererAnimationState__Enum {
        inline app::WandererEntity_WandererAnimationState__Enum__Class** type_info() {
            static app::WandererEntity_WandererAnimationState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererEntity_WandererAnimationState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererEntity_WandererAnimationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererEntity_WandererAnimationState__Enum__Class>(type_info(), "", "WandererEntity", "WandererAnimationState");
        }
        inline app::WandererEntity_WandererAnimationState__Enum* create() {
            return il2cpp::create_object<app::WandererEntity_WandererAnimationState__Enum>(get_class());
        }
    } // namespace WandererEntity_WandererAnimationState__Enum
} // namespace app::classes::types
