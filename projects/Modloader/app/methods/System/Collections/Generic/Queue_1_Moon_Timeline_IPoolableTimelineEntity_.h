#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_IPoolableTimelineEntity_.h>
#include <Modloader/app/structs/IPoolableTimelineEntity.h>

namespace app::classes::System::Collections::Generic::Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E100, Queue_1_Moon_Timeline_IPoolableTimelineEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr, app::IPoolableTimelineEntity* item))
    IL2CPP_REGISTER_METHODINFO(0x047824D0, Queue_1_Moon_Timeline_IPoolableTimelineEntity__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729D80, Queue_1_Moon_Timeline_IPoolableTimelineEntity__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::IPoolableTimelineEntity*, Dequeue, (app::Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792028, Queue_1_Moon_Timeline_IPoolableTimelineEntity__Dequeue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_Moon_Timeline_IPoolableTimelineEntity_
