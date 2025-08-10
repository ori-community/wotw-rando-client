#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData.h>
#include <Modloader/app/structs/RecordableIdData.h>

namespace app::classes::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData {
    IL2CPP_REGISTER_METHOD(
        0x014EE3F0,
        void,
        ctor,
        app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData* this_ptr,
        app::RecordableIdData recording_i_d,
        app::MoonGuid* guid
    )
}
