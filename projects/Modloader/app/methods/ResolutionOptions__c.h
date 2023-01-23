#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ResolutionOptions_c.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry.h>

namespace app::classes::ResolutionOptions___c {
    IL2CPP_REGISTER_METHOD(0x009076E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ResolutionOptions_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00907820, int32_t, _SortResolutions_b__9_0, (app::ResolutionOptions_c * this_ptr, app::ResolutionOptions_ResolutionEntry* x, app::ResolutionOptions_ResolutionEntry* y))
    IL2CPP_REGISTER_METHODINFO(0x047902C0, ResolutionOptions_c__SortResolutions_b__9_0__MethodInfo)
} // namespace app::classes::ResolutionOptions___c
