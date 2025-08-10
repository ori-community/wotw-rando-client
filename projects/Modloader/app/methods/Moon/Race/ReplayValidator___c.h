#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGhostFrameData.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ReplayValidator_c.h>

namespace app::classes::Moon::Race::ReplayValidator___c {
    IL2CPP_REGISTER_METHOD(0x00C4C240, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReplayValidator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _IsValidReason_b__5_0, app::ReplayValidator_c* this_ptr, app::Rect unused)
    IL2CPP_REGISTER_METHOD(0x00C4C380, bool, _IsValidReason_b__5_1, app::ReplayValidator_c* this_ptr, app::IGhostFrameData* data)
} // namespace app::classes::Moon::Race::ReplayValidator___c
