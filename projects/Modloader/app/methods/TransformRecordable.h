#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformRecordable.h>

namespace app::classes::TransformRecordable {
    IL2CPP_REGISTER_METHOD(0x00B08AD0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B08BA0, void, Awake, (app::TransformRecordable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B08C60, void, OnDestroy, (app::TransformRecordable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TransformRecordable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B08D40, void, cctor, ())
} // namespace app::classes::TransformRecordable
