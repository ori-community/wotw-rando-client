#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentBag_1_System_Object_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ConcurrentBag_1_T_WorkStealingQueue_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentBag_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02ADBFD0, int32_t, get_Count, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADC100, int32_t, get_DangerousCount, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADC210, app::Object*, ICollection_get_SyncRoot, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_GlobalQueuesLock, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADB050, void, Add, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02ADB0C0, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02ADB0F0, bool, TryTake, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object** result))
    IL2CPP_REGISTER_METHOD(0x02ADB190, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_*, GetCurrentThreadWorkStealingQueue, (app::ConcurrentBag_1_System_Object_ * this_ptr, bool force_create))
    IL2CPP_REGISTER_METHOD(0x02ADB210, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_*, CreateWorkStealingQueueForCurrentThread, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADB4A0, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_*, GetUnownedWorkStealingQueue, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADB520, bool, TrySteal, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object** result, bool take))
    IL2CPP_REGISTER_METHOD(0x02ADB740, bool, TryStealFromTo, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_* start_inclusive, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_* end_exclusive, app::Object** result, bool take))
    IL2CPP_REGISTER_METHOD(0x02ADB7D0, void, CopyTo, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02ADBA80, int32_t, CopyFromEachQueueToArray, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Object__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02ADBB00, void, ICollection_CopyTo, (app::ConcurrentBag_1_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02ADBC90, app::Object__Array*, ToArray, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADBE50, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADBFA0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ConcurrentBag_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADC270, void, FreezeBag, (app::ConcurrentBag_1_System_Object_ * this_ptr, bool* lock_taken))
    IL2CPP_REGISTER_METHOD(0x02ADC370, void, UnfreezeBag, (app::ConcurrentBag_1_System_Object_ * this_ptr, bool lock_taken))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentBag_1_System_Object_
