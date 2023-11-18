#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesignOnlyAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::DesignOnlyAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::DesignOnlyAttribute * this_ptr, bool is_design_only))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDesignOnly, (app::DesignOnlyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE5A20, bool, IsDefaultAttribute, (app::DesignOnlyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE5AE0, bool, Equals, (app::DesignOnlyAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, (app::DesignOnlyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE5BB0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::DesignOnlyAttribute
