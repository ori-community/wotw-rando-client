#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateData__Boxed.h>

namespace app::classes::Moon::UberStateVisualization::UberStateData {
    IL2CPP_REGISTER_METHOD(0x002450D0, app::String*, ToString, app::UberStateData__Boxed* this_ptr)
}
