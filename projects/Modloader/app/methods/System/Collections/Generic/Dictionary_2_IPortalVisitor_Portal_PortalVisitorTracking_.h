#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_.h>
#include <Modloader/app/structs/IPortalVisitor.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * this_ptr, app::IPortalVisitor* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Portal_PortalVisitorTracking*, get_Item, (app::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * this_ptr, app::IPortalVisitor* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * this_ptr, app::IPortalVisitor* key, app::Portal_PortalVisitorTracking* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * this_ptr, app::IPortalVisitor* key))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_
