#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SkeetoStateSelector.h>

namespace app::classes::SkeetoStateSelector {
    IL2CPP_REGISTER_METHOD(0x006B38E0, app::SkeetoEntity_SkeetoState__Enum, GetEnumValue, (app::SkeetoStateSelector * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006B3A60, void, ctor, (app::SkeetoStateSelector * this_ptr))
} // namespace app::classes::SkeetoStateSelector
