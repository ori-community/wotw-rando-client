#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultBinder_BinderState.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::DefaultBinder_BinderState {
    IL2CPP_REGISTER_METHOD(0x0173D7A0, void, ctor, (app::DefaultBinder_BinderState * this_ptr, app::Int32__Array* args_map, int32_t original_size, bool is_param_array))
}
