#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed.h>
#include <Modloader/app/structs/Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ {
    IL2CPP_REGISTER_METHOD(0x001ECB90, void, ctor, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr, app::Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_* q))
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED220, bool, MoveNext, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762D80, Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001ED230, app::GhostWorldObjectsLifetimePlugin_PendingInstantiation, get_Current, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED270, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B220, Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation__ThrowEnumerationNotStartedOrEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001ED280, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ED330, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AAD8, Queue_1_T_Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_GhostWorldObjectsLifetimePlugin_PendingInstantiation_
