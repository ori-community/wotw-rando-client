#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/DeathInformation.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DeathInformation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::DeathInformation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00DDE2F0,
        void,
        ctor_2,
        app::DeathInformation* this_ptr,
        app::Vector3 position,
        int32_t time_of_death,
        int32_t progress,
        int32_t death_number
    )
    IL2CPP_REGISTER_METHOD(0x00DDE310, void, Serialize, app::DeathInformation* this_ptr, app::Archive* ar)
} // namespace app::classes::DeathInformation
