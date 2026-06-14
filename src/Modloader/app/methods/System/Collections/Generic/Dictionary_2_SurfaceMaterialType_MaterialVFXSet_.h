#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_MaterialVFXSet_.h>
#include <Modloader/app/structs/MaterialVFXSet.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_MaterialVFXSet_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_SurfaceMaterialType_MaterialVFXSet_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_SurfaceMaterialType_MaterialVFXSet_* this_ptr,
        app::SurfaceMaterialType__Enum key,
        app::MaterialVFXSet* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_SurfaceMaterialType_MaterialVFXSet_* this_ptr,
        app::SurfaceMaterialType__Enum key,
        app::MaterialVFXSet** value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_MaterialVFXSet_
