#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Exception_.h>
#include <Modloader/app/structs/Action_2_Action_Action_1_Exception_.h>
#include <Modloader/app/structs/EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Func_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/Func_1_System_Collections_Generic_IEnumerable_1__1.h>
#include <Modloader/app/structs/Func_1_System_Collections_Generic_IEnumerable_1__2.h>
#include <Modloader/app/structs/Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_.h>
#include <Modloader/app/structs/Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_.h>
#include <Modloader/app/structs/Func_1_ZenFulcrum_EmbeddedBrowser_IPromise___Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Func_1__1.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IPromise.h>
#include <Modloader/app/structs/IPromise_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/IPromise_1_System_Object_.h>
#include <Modloader/app/structs/IPromise__Array.h>
#include <Modloader/app/structs/IRejectable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Promise.h>
#include <Modloader/app/structs/PromiseState__Enum.h>
#include <Modloader/app/structs/Promise_ResolveHandler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise {
    IL2CPP_REGISTER_METHOD(0x01663380, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01663700, void, add_UnhandledException, app::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x016637F0, void, remove_UnhandledException, app::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x016638E0, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_*, GetPendingPromises, )
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Id, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Id, app::Promise* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Name, app::Promise* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::PromiseState__Enum, get_CurState, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_CurState, app::Promise* this_ptr, app::PromiseState__Enum value)
    IL2CPP_REGISTER_METHOD(0x01663980, void, ctor_1, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01663A90, void, ctor_2, app::Promise* this_ptr, app::Action_2_Action_Action_1_Exception_* resolver)
    IL2CPP_REGISTER_METHOD(0x01663DA0, void, AddRejectHandler, app::Promise* this_ptr, app::Action_1_Exception_* on_rejected, app::IRejectable* rejectable)
    IL2CPP_REGISTER_METHOD(0x01664050, void, AddResolveHandler, app::Promise* this_ptr, app::Action* on_resolved, app::IRejectable* rejectable)
    IL2CPP_REGISTER_METHOD(
        0x01664300,
        void,
        InvokeRejectHandler,
        app::Promise* this_ptr,
        app::Action_1_Exception_* callback,
        app::IRejectable* rejectable,
        app::Exception* value
    )
    IL2CPP_REGISTER_METHOD(0x016643E0, void, InvokeResolveHandler, app::Promise* this_ptr, app::Action* callback, app::IRejectable* rejectable)
    IL2CPP_REGISTER_METHOD(0x016644A0, void, ClearHandlers, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016644B0, void, InvokeRejectHandlers, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01664720, void, InvokeResolveHandlers, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016648B0, void, Reject, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01664AF0, void, Resolve, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01664E80, void, Done_1, app::Promise* this_ptr, app::Action* on_resolved, app::Action_1_Exception_* on_rejected)
    IL2CPP_REGISTER_METHOD(0x01665010, void, Done_2, app::Promise* this_ptr, app::Action* on_resolved)
    IL2CPP_REGISTER_METHOD(0x01665190, void, Done_3, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0099AFC0, app::IPromise*, WithName, app::Promise* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x016652F0, app::IPromise*, Catch, app::Promise* this_ptr, app::Action_1_Exception_* on_rejected)
    IL2CPP_REGISTER_METHOD(0x01665700, app::IPromise*, Then_1, app::Promise* this_ptr, app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_* on_resolved)
    IL2CPP_REGISTER_METHOD(0x01665710, app::IPromise*, Then_2, app::Promise* this_ptr, app::Action* on_resolved)
    IL2CPP_REGISTER_METHOD(
        0x01665720,
        app::IPromise*,
        Then_3,
        app::Promise* this_ptr,
        app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(0x01665B30, app::IPromise*, Then_4, app::Promise* this_ptr, app::Action* on_resolved, app::Action_1_Exception_* on_rejected)
    IL2CPP_REGISTER_METHOD(
        0x01665F40,
        void,
        ActionHandlers,
        app::Promise* this_ptr,
        app::IRejectable* result_promise,
        app::Action* resolve_handler,
        app::Action_1_Exception_* reject_handler
    )
    IL2CPP_REGISTER_METHOD(0x01665FE0, app::IPromise*, ThenAll_1, app::Promise* this_ptr, app::Func_1_System_Collections_Generic_IEnumerable_1_* chain)
    IL2CPP_REGISTER_METHOD(0x01666220, app::IPromise*, All_1, app::IPromise__Array* promises)
    IL2CPP_REGISTER_METHOD(0x016662C0, app::IPromise*, All_2, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_* promises)
    IL2CPP_REGISTER_METHOD(0x01666640, app::IPromise*, ThenSequence, app::Promise* this_ptr, app::Func_1_System_Collections_Generic_IEnumerable_1__1* chain)
    IL2CPP_REGISTER_METHOD(0x01666880, app::IPromise*, Sequence_1, app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise___Array* fns)
    IL2CPP_REGISTER_METHOD(0x01666920, app::IPromise*, Sequence_2, app::IEnumerable_1_System_Func_1__1* fns)
    IL2CPP_REGISTER_METHOD(0x01666B30, app::IPromise*, ThenRace_1, app::Promise* this_ptr, app::Func_1_System_Collections_Generic_IEnumerable_1_* chain)
    IL2CPP_REGISTER_METHOD(0x01666D70, app::IPromise*, Race_1, app::IPromise__Array* promises)
    IL2CPP_REGISTER_METHOD(0x01666E10, app::IPromise*, Race_2, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_* promises)
    IL2CPP_REGISTER_METHOD(0x01667180, app::IPromise*, Resolved, )
    IL2CPP_REGISTER_METHOD(0x016672E0, app::IPromise*, Rejected, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01667440, void, PropagateUnhandledException, app::Object* sender, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01667690, app::IEnumerator*, ToWaitFor, app::Promise* this_ptr, bool abort_on_fail)
    IL2CPP_REGISTER_METHOD(0x01667A90, void, __ctor_b__26_0, app::Promise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01667AA0, void, __ctor_b__26_1, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01667AB0, void, _InvokeResolveHandlers_b__33_0, app::Promise* this_ptr, app::Promise_ResolveHandler handler)
    IL2CPP_REGISTER_METHOD(0x01667AD0, void, _Done_b__36_0, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01667B80, void, _Done_b__37_0, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01667C30, void, _Done_b__38_0, app::Promise* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(
        0x02FF84F0,
        app::IPromise_1_System_Object_*,
        Then_5,
        app::Promise* this_ptr,
        app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_* on_resolved
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF8520,
        app::IPromise_1_System_Object_*,
        Then_6,
        app::Promise* this_ptr,
        app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF8990,
        app::IPromise_1_System_Collections_Generic_IEnumerable_1_*,
        ThenAll_2,
        app::Promise* this_ptr,
        app::Func_1_System_Collections_Generic_IEnumerable_1__2* chain
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF8990,
        app::IPromise_1_System_Object_*,
        ThenRace_2,
        app::Promise* this_ptr,
        app::Func_1_System_Collections_Generic_IEnumerable_1__2* chain
    )
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise
