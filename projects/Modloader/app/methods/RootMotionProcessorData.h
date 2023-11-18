#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RootMotionProcessorData.h>

namespace app::classes::RootMotionProcessorData {
    IL2CPP_REGISTER_METHOD(0x01367F90, void, ctor, (app::RootMotionProcessorData * this_ptr))
}
