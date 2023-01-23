#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AllContainer_1_IPortalVisitor_.h>
#include <Modloader/app/structs/IPortalVisitor.h>

namespace app::classes::AllContainer_1_IPortalVisitor_ {
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_IPortalVisitor_ * this_ptr, app::IPortalVisitor* item))
    IL2CPP_REGISTER_METHODINFO(0x0476C210, AllContainer_1_IPortalVisitor__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_IPortalVisitor_ * this_ptr, app::IPortalVisitor* item))
    IL2CPP_REGISTER_METHODINFO(0x0475B9C8, AllContainer_1_IPortalVisitor__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::IPortalVisitor*, get_Item, (app::AllContainer_1_IPortalVisitor_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04707F90, AllContainer_1_IPortalVisitor__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_IPortalVisitor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774478, AllContainer_1_IPortalVisitor__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_IPortalVisitor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740F28, AllContainer_1_IPortalVisitor__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_IPortalVisitor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772AF0, AllContainer_1_IPortalVisitor___ctor__MethodInfo)
} // namespace app::classes::AllContainer_1_IPortalVisitor_
