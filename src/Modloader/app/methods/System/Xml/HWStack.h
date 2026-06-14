#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Xml::HWStack {
    IL2CPP_REGISTER_METHOD(0x021F81C0, void, ctor_1, app::HWStack* this_ptr, int32_t growth_rate)
    IL2CPP_REGISTER_METHOD(0x021F8270, void, ctor_2, app::HWStack* this_ptr, int32_t growth_rate, int32_t limit)
    IL2CPP_REGISTER_METHOD(0x021F8320, app::Object*, Push, app::HWStack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F8480, app::Object*, Pop, app::HWStack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F84D0, app::Object*, Peek, app::HWStack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F8520, void, AddToTop, app::HWStack* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x021F85B0, app::Object*, get_Item, app::HWStack* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x021F8690, void, set_Item, app::HWStack* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Length, app::HWStack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021F87A0, void, ctor_3, app::HWStack* this_ptr, app::Object__Array* stack, int32_t growth_rate, int32_t used, int32_t size)
    IL2CPP_REGISTER_METHOD(0x021F87C0, app::Object*, Clone, app::HWStack* this_ptr)
} // namespace app::classes::System::Xml::HWStack
