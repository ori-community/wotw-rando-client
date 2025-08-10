#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WandererNPC_State__Enum.h>
#include <Modloader/app/structs/WandererStateSelector.h>

namespace app::classes::WandererStateSelector {
    IL2CPP_REGISTER_METHOD(0x008D24E0, app::WandererNPC_State__Enum, GetEnumValue, app::WandererStateSelector* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008D2730, void, ctor, app::WandererStateSelector* this_ptr)
} // namespace app::classes::WandererStateSelector
