#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameCaptureTester.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum.h>
#include <Modloader/app/structs/Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_.h>

namespace app::classes::System::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_ {
    IL2CPP_REGISTER_METHOD(
        0x02A64EE0,
        void,
        ctor,
        app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_* this_ptr,
        app::GameController_ProfilingConfiguration__Enum item1,
        app::FrameCaptureTester* item2
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::FrameCaptureTester*, get_Item2, app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FC6D0,
        app::GameController_ProfilingConfiguration__Enum,
        get_Item1,
        app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_* this_ptr
    )
} // namespace app::classes::System::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_
