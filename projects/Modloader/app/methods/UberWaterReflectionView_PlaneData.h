#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberWaterReflectionPlane.h>
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData__Boxed.h>

namespace app::classes::UberWaterReflectionView_PlaneData {
    IL2CPP_REGISTER_METHOD(0x00125DA0, void, ctor, app::UberWaterReflectionView_PlaneData__Boxed* this_ptr, app::UberWaterReflectionPlane* plane)
}
