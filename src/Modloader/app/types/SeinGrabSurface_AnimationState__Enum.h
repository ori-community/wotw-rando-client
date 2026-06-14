#pragma once
#include <Modloader/app/structs/SeinGrabSurface_AnimationState__Enum.h>
#include <Modloader/app/structs/SeinGrabSurface_AnimationState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabSurface_AnimationState__Enum {
        inline app::SeinGrabSurface_AnimationState__Enum__Class** type_info() {
            static app::SeinGrabSurface_AnimationState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabSurface_AnimationState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabSurface_AnimationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabSurface_AnimationState__Enum__Class>(type_info(), "", "SeinGrabSurface", "AnimationState");
        }
        inline app::SeinGrabSurface_AnimationState__Enum* create() {
            return il2cpp::create_object<app::SeinGrabSurface_AnimationState__Enum>(get_class());
        }
    } // namespace SeinGrabSurface_AnimationState__Enum
} // namespace app::classes::types
