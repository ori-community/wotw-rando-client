#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleInterestPoint.h>

namespace app::classes::TentacleInterestPoint {
    IL2CPP_REGISTER_METHOD(0x010CDA20, void, OnDrawGizmosSelected, app::TentacleInterestPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CDB60, void, ctor, app::TentacleInterestPoint* this_ptr)
} // namespace app::classes::TentacleInterestPoint
