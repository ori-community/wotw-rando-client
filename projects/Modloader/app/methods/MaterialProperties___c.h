#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialProperties_c.h>
#include <Modloader/app/structs/OverridableColorProperty.h>
#include <Modloader/app/structs/OverridableFloatProperty.h>
#include <Modloader/app/structs/OverridableTextureProperty.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MaterialProperties___c {
    IL2CPP_REGISTER_METHOD(0x013828C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MaterialProperties_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01382A00, bool, _RemovePropertiesThatArntOverwridden_b__5_0, (app::MaterialProperties_c * this_ptr, app::OverridableTextureProperty* a))
    IL2CPP_REGISTER_METHOD(0x01382A00, bool, _RemovePropertiesThatArntOverwridden_b__5_1, (app::MaterialProperties_c * this_ptr, app::OverridableFloatProperty* a))
    IL2CPP_REGISTER_METHOD(0x01382A00, bool, _RemovePropertiesThatArntOverwridden_b__5_2, (app::MaterialProperties_c * this_ptr, app::OverridableColorProperty* a))
    IL2CPP_REGISTER_METHOD(0x00AD4920, app::String*, _RemovePropertiesThatArntOverwridden_b__5_3, (app::MaterialProperties_c * this_ptr, app::OverridableTextureProperty* a))
    IL2CPP_REGISTER_METHOD(0x00AD4920, app::String*, _RemovePropertiesThatArntOverwridden_b__5_4, (app::MaterialProperties_c * this_ptr, app::OverridableFloatProperty* a))
    IL2CPP_REGISTER_METHOD(0x00AD4920, app::String*, _RemovePropertiesThatArntOverwridden_b__5_5, (app::MaterialProperties_c * this_ptr, app::OverridableColorProperty* a))
} // namespace app::classes::MaterialProperties___c
