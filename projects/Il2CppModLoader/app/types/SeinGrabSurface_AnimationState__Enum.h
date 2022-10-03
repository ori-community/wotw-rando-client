#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabSurface_AnimationState__Enum {
        namespace {
            app::SeinGrabSurface_AnimationState__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinGrabSurface_AnimationState__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGrabSurface_AnimationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabSurface_AnimationState__Enum__Class>(type_info, "", "SeinGrabSurface", "AnimationState");
        }
        inline app::SeinGrabSurface_AnimationState__Enum* create() {
            return il2cpp::create_object<app::SeinGrabSurface_AnimationState__Enum>(get_class());
        }
    } // namespace SeinGrabSurface_AnimationState__Enum
} // namespace app::classes::types
