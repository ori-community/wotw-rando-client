#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SlugDirectionalAnimation.h>
#include <Modloader/app/structs/SlugDirectionalAnimationPicker.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SlugDirectionalAnimationPicker {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::SlugDirectionalAnimationPicker* this_ptr, app::SlugDirectionalAnimation* animation)
    IL2CPP_REGISTER_METHOD(
        0x006C5410,
        app::TextureAnimationWithTransitions*,
        PickAnimation,
        app::SlugDirectionalAnimationPicker* this_ptr,
        app::Vector3 up,
        bool face_left
    )
} // namespace app::classes::SlugDirectionalAnimationPicker
