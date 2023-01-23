#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParamsArray__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::ParamsArray {
    IL2CPP_REGISTER_METHOD(0x001E11D0, void, ctor_1, (app::ParamsArray__Boxed * this_ptr, app::Object* arg0))
    IL2CPP_REGISTER_METHOD(0x001E11E0, void, ctor_2, (app::ParamsArray__Boxed * this_ptr, app::Object* arg0, app::Object* arg1))
    IL2CPP_REGISTER_METHOD(0x001E11F0, void, ctor_3, (app::ParamsArray__Boxed * this_ptr, app::Object* arg0, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x001E1200, void, ctor_4, (app::ParamsArray__Boxed * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x001E1210, int32_t, get_Length, (app::ParamsArray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E1230, app::Object*, get_Item, (app::ParamsArray__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x001E1240, app::Object*, GetAtSlow, (app::ParamsArray__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0227EB10, void, cctor, ())
} // namespace app::classes::System::ParamsArray
