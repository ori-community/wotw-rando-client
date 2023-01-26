#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SandWormEntity_SandWormBodyWave_.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyWave.h>

namespace app::classes::System::Collections::Generic::List_1_SandWormEntity_SandWormBodyWave_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SandWormEntity_SandWormBodyWave_ * this_ptr, app::SandWormEntity_SandWormBodyWave* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SandWormEntity_SandWormBodyWave_ * this_ptr, app::SandWormEntity_SandWormBodyWave* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SandWormEntity_SandWormBodyWave_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SandWormEntity_SandWormBodyWave*, get_Item, (app::List_1_SandWormEntity_SandWormBodyWave_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_SandWormEntity_SandWormBodyWave_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_SandWormEntity_SandWormBodyWave_
