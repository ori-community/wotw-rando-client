#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation_.h>

namespace app::classes::System::Collections::Generic::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D360, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation, Dequeue, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D1B0, void, Enqueue, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation item))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2D40, void, ctor_2, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2E70, app::Object*, ICollection_get_SyncRoot, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA2FD0, void, ICollection_CopyTo, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0243D290, app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation_, GetEnumerator, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D2D0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D430, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation, Peek, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D4B0, bool, Contains, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation item))
    IL2CPP_REGISTER_METHOD(0x0243D5D0, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array*, ToArray, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x02CA32D0, void, ThrowForEmptyQueue, (app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_
