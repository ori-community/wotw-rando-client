#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/EquipmentRadialSelection_RadialItemVisual.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ * this_ptr, app::CleverMenuItem* key, app::EquipmentRadialSelection_RadialItemVisual* value))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::EquipmentRadialSelection_RadialItemVisual*, get_Item, (app::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ * this_ptr, app::CleverMenuItem* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_
