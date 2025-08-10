#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData.h>

namespace app::classes::System::Collections::Generic::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_* this_ptr,
        app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_,
        GetEnumerator,
        app::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData_
