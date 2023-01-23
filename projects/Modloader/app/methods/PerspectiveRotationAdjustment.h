#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PerspectiveRotationAdjustment {
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_Weight, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499420, app::Transform*, get_TargetTransform, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_DefaultWeight, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004994F0, void, Start, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499680, void, OnEnable, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499690, void, OnDisable, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004996A0, void, OnDestroy, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004997D0, void, Update, (app::PerspectiveRotationAdjustment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499940, void, SetForward, (app::PerspectiveRotationAdjustment * this_ptr, app::Vector3 forward))
    IL2CPP_REGISTER_METHOD(0x00499D20, void, SetWeight, (app::PerspectiveRotationAdjustment * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x00499DF0, void, SetWeightOvertime, (app::PerspectiveRotationAdjustment * this_ptr, float weight, float time))
    IL2CPP_REGISTER_METHOD(0x00499ED0, void, ctor, (app::PerspectiveRotationAdjustment * this_ptr))
} // namespace app::classes::PerspectiveRotationAdjustment
