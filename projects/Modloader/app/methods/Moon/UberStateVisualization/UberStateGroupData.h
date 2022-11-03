#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberStateVisualization::UberStateGroupData {
    IL2CPP_REGISTER_METHOD(0x00245100, app::String*, get_Name, (app::UberStateGroupData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00245110, void, ctor, (app::UberStateGroupData__Boxed * this_ptr, app::UberID* id))
    IL2CPP_REGISTER_METHOD(0x00245100, app::String*, ToString, (app::UberStateGroupData__Boxed * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::UberStateGroupData
