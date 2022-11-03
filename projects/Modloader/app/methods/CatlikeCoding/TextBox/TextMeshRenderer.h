#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CatlikeCoding::TextBox::TextMeshRenderer {
    IL2CPP_REGISTER_METHOD(0x01037470, void, OnDestroy, (app::TextMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01037520, void, Prepare, (app::TextMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01037F90, void, Add, (app::TextMeshRenderer * this_ptr, app::CharMetaData meta, app::Vector2 offset, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01038360, void, Apply, (app::TextMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010384E0, void, ctor, (app::TextMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010384F0, void, cctor, ())
} // namespace app::classes::CatlikeCoding::TextBox::TextMeshRenderer
