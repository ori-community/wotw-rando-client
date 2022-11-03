#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabSurface_AnimationState__Enum {
        namespace {
            inline app::SeinGrabSurface_AnimationState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabSurface_AnimationState__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGrabSurface_AnimationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabSurface_AnimationState__Enum__Class>(type_info, "", "SeinGrabSurface", "AnimationState");
        }
        inline app::SeinGrabSurface_AnimationState__Enum* create() {
            return il2cpp::create_object<app::SeinGrabSurface_AnimationState__Enum>(get_class());
        }
    } // namespace SeinGrabSurface_AnimationState__Enum
} // namespace app::classes::types
