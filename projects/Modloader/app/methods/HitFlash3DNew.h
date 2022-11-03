#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HitFlash3DNew {
    IL2CPP_REGISTER_METHOD(0x00B56C40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B56CE0, void, Prewarm, (app::HitFlash3DNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56CF0, void, CacheSerializedComponents, (app::HitFlash3DNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56CE0, void, Awake, (app::HitFlash3DNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56D80, void, OnReceiveEvent, (app::HitFlash3DNew * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00B56EF0, void, PlayFlash_1, (app::HitFlash3DNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57040, void, PlayFlash_2, (app::HitFlash3DNew * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::HitFlash3DNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::HitFlash3DNew
