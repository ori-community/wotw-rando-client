#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Queue {
    IL2CPP_REGISTER_METHOD(0x0202B250, void, ctor_1, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202B270, void, ctor_2, (app::Queue * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0202B280, void, ctor_3, (app::Queue * this_ptr, int32_t capacity, float grow_factor))
    IL2CPP_REGISTER_METHODINFO(0x04770508, Queue__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202B480, void, ctor_4, (app::Queue * this_ptr, app::ICollection* col))
    IL2CPP_REGISTER_METHODINFO(0x047246B8, Queue__ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202B6B0, app::Object*, Clone, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202B8A0, app::Object*, get_SyncRoot, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202BA00, void, Clear, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202BA60, void, CopyTo, (app::Queue * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047703C0, Queue_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202BCB0, void, Enqueue, (app::Queue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0202BEC0, app::IEnumerator*, GetEnumerator, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C030, app::Object*, Dequeue, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047277C8, Queue_Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202C170, app::Object*, Peek, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787418, Queue_Peek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202C270, app::Object*, GetElement, (app::Queue * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0202C2C0, app::Object__Array*, ToArray, (app::Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C3C0, void, SetCapacity, (app::Queue * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Queue
