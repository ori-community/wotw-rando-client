#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/AllContainer_1_UberWaterControl_.h>
#include <Modloader/app/structs/List_1_UberWaterControl_.h>

namespace app::classes::AllContainer_1_UberWaterControl_ {
    IL2CPP_REGISTER_METHOD(0x019D7800, app::UberWaterControl*, get_Item, (app::AllContainer_1_UberWaterControl_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04705CD8, AllContainer_1_UberWaterControl__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_UberWaterControl_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047964C0, AllContainer_1_UberWaterControl__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_UberWaterControl_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047128C0, AllContainer_1_UberWaterControl__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79B0, void, RemoveAt, (app::AllContainer_1_UberWaterControl_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471F758, AllContainer_1_UberWaterControl__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_UberWaterControl_*, RawList, (app::AllContainer_1_UberWaterControl_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716370, AllContainer_1_UberWaterControl__RawList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_UberWaterControl_ * this_ptr, app::UberWaterControl* item))
    IL2CPP_REGISTER_METHODINFO(0x047206D0, AllContainer_1_UberWaterControl__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_UberWaterControl_ * this_ptr, app::UberWaterControl* item))
    IL2CPP_REGISTER_METHODINFO(0x0477B9E8, AllContainer_1_UberWaterControl__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_UberWaterControl_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717E08, AllContainer_1_UberWaterControl___ctor__MethodInfo)
} // namespace app::classes::AllContainer_1_UberWaterControl_
