#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StressTester_SceneIdentifier.h>
#include <Modloader/app/structs/StressTester_StressTestPoint.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::StressTester_StressTestPoint {
    IL2CPP_REGISTER_METHOD(
        0x0066EA50,
        void,
        ctor,
        app::StressTester_StressTestPoint* this_ptr,
        app::StressTester_SceneIdentifier* scene_identifier,
        app::Vector3 position
    )
}
