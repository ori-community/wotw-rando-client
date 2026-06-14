#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_RegionPointer_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TriangleNet_Geometry_RegionPointer_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_RegionPointer_.h>
#include <Modloader/app/structs/RegionPointer.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_RegionPointer_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr, app::RegionPointer* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_TriangleNet_Geometry_RegionPointer_,
        GetEnumerator,
        app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_TriangleNet_Geometry_RegionPointer_* this_ptr,
        app::IEnumerable_1_TriangleNet_Geometry_RegionPointer_* collection
    )
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_RegionPointer_
