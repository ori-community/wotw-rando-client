#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_SurfaceMaterialType_.h>
#include <Modloader/app/structs/IEnumerable_1_SurfaceMaterialType_.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_SurfaceMaterialType_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, app::HashSet_1_SurfaceMaterialType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, app::HashSet_1_SurfaceMaterialType_* this_ptr, app::SurfaceMaterialType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_SurfaceMaterialType_* this_ptr, app::SurfaceMaterialType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_2, app::HashSet_1_SurfaceMaterialType_* this_ptr, app::IEnumerable_1_SurfaceMaterialType_* collection)
} // namespace app::classes::System::Collections::Generic::HashSet_1_SurfaceMaterialType_
