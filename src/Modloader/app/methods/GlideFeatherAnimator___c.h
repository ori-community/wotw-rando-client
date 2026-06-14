#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlideFeatherAnimator_c.h>
#include <Modloader/app/structs/IEnumerable_1_Atlas_.h>
#include <Modloader/app/structs/TextureAnimation.h>

namespace app::classes::GlideFeatherAnimator___c {
    IL2CPP_REGISTER_METHOD(0x007F5320, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GlideFeatherAnimator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00529D50,
        app::IEnumerable_1_Atlas_*,
        _InitAtlases_b__4_0,
        app::GlideFeatherAnimator_c* this_ptr,
        app::TextureAnimation* texture_animation
    )
} // namespace app::classes::GlideFeatherAnimator___c
