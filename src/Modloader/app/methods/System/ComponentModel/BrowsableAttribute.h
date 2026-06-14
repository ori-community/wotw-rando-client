#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowsableAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::BrowsableAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::BrowsableAttribute* this_ptr, bool browsable)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Browsable, app::BrowsableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A5760, bool, Equals, app::BrowsableAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, app::BrowsableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A5830, bool, IsDefaultAttribute, app::BrowsableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A58F0, void, cctor, )
} // namespace app::classes::System::ComponentModel::BrowsableAttribute
