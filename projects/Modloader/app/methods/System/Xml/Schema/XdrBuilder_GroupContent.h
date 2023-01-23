#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XdrBuilder_GroupContent.h>

namespace app::classes::System::Xml::Schema::XdrBuilder_GroupContent {
    IL2CPP_REGISTER_METHOD(0x02232350, void, Copy_1, (app::XdrBuilder_GroupContent * from, app::XdrBuilder_GroupContent* to))
    IL2CPP_REGISTER_METHOD(0x02232390, app::XdrBuilder_GroupContent*, Copy_2, (app::XdrBuilder_GroupContent * other))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XdrBuilder_GroupContent * this_ptr))
} // namespace app::classes::System::Xml::Schema::XdrBuilder_GroupContent
