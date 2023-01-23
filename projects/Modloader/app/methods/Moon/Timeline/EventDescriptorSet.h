#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/EventDescriptorSet.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/IEventDescriptor.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GennadiysDice_DiceEvents__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>

namespace app::classes::Moon::Timeline::EventDescriptorSet {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HashSet_1_System_Int32_*, get_m_ids, (app::EventDescriptorSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Moon_Timeline_IEventDescriptor_*, get_Descriptors, (app::EventDescriptorSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBC5F0, bool, get_HasEvents, (app::EventDescriptorSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBC680, app::EventDescriptorSet*, Add_1, (app::EventDescriptorSet * this_ptr, app::IEventDescriptor* descriptor))
    IL2CPP_REGISTER_METHOD(0x01BBC780, app::EventDescriptorSet*, Add_2, (app::EventDescriptorSet * this_ptr, int32_t event_id, float time, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01BBC9B0, bool, GetStaticTime, (app::EventDescriptorSet * this_ptr, int32_t id, float* time))
    IL2CPP_REGISTER_METHOD(0x01BBCAC0, app::IEventDescriptor*, Get, (app::EventDescriptorSet * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x01BBCC70, void, ctor, (app::EventDescriptorSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F0040, app::EventDescriptorSet*, Add_3, (app::EventDescriptorSet * this_ptr, app::GennadiysDice_DiceEvents__Enum evt, float time))
    IL2CPP_REGISTER_METHODINFO(0x04715390, EventDescriptorSet_Add_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0040, app::EventDescriptorSet*, Add_4, (app::EventDescriptorSet * this_ptr, app::Int32Enum__Enum evt, float time))
} // namespace app::classes::Moon::Timeline::EventDescriptorSet
