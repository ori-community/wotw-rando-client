#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WwiseEventSystem_c_DisplayClass3_0.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/AkCallbackInfo.h>

namespace app::classes::Moon::Wwise::WwiseEventSystem___c__DisplayClass3_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseEventSystem_c_DisplayClass3_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02713630, void, _FireAndForget_b__0, (app::WwiseEventSystem_c_DisplayClass3_0 * this_ptr, app::Object* cookie, app::AkCallbackType__Enum type, app::AkCallbackInfo* info))
    IL2CPP_REGISTER_METHODINFO(0x0470A088, WwiseEventSystem_c_DisplayClass3_0__FireAndForget_b__0__MethodInfo)
} // namespace app::classes::Moon::Wwise::WwiseEventSystem___c__DisplayClass3_0
