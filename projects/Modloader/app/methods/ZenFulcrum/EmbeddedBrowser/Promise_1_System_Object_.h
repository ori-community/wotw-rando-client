#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Exception_.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Action_2_Action_1_Object_Action_1_Exception_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_System_Collections_Generic_IEnumerable_1__1.h>
#include <Modloader/app/structs/Func_2_Object_System_Collections_Generic_IEnumerable_1__2.h>
#include <Modloader/app/structs/Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_.h>
#include <Modloader/app/structs/Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_1_.h>
#include <Modloader/app/structs/IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IPromise.h>
#include <Modloader/app/structs/IPromise_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/IPromise_1_System_Object_.h>
#include <Modloader/app/structs/IPromise_1_System_Object___Array.h>
#include <Modloader/app/structs/IRejectable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PromiseState__Enum.h>
#include <Modloader/app/structs/Promise_1_System_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_Id, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Id, app::Promise_1_System_Object_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Name, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Name, app::Promise_1_System_Object_* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::PromiseState__Enum, get_CurState, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_CurState, app::Promise_1_System_Object_* this_ptr, app::PromiseState__Enum value)
    IL2CPP_REGISTER_METHOD(0x02AD53B0, app::Object*, get_Value, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD1E40, void, ctor_1, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD1FA0, void, ctor_2, app::Promise_1_System_Object_* this_ptr, app::Action_2_Action_1_Object_Action_1_Exception_* resolver)
    IL2CPP_REGISTER_METHOD(
        0x02AD2350,
        void,
        AddRejectHandler,
        app::Promise_1_System_Object_* this_ptr,
        app::Action_1_Exception_* on_rejected,
        app::IRejectable* rejectable
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD2600,
        void,
        AddResolveHandler,
        app::Promise_1_System_Object_* this_ptr,
        app::Action_1_Object_* on_resolved,
        app::IRejectable* rejectable
    )
    IL2CPP_REGISTER_METHOD(
        0x015E6F70,
        void,
        InvokeHandler,
        app::Promise_1_System_Object_* this_ptr,
        app::Action_1_Object_* callback,
        app::IRejectable* rejectable,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02AD28C0, void, ClearHandlers, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD28D0, void, InvokeRejectHandlers, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD2B80, void, InvokeResolveHandlers, app::Promise_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02AD2D00, void, Reject, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD2FB0, void, Resolve, app::Promise_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02AD3260,
        void,
        Done_1,
        app::Promise_1_System_Object_* this_ptr,
        app::Action_1_Object_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(0x02AD3440, void, Done_2, app::Promise_1_System_Object_* this_ptr, app::Action_1_Object_* on_resolved)
    IL2CPP_REGISTER_METHOD(0x02AD3620, void, Done_3, app::Promise_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD37B0, app::IPromise_1_System_Object_*, WithName, app::Promise_1_System_Object_* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02AD37F0, app::IPromise_1_System_Object_*, Catch, app::Promise_1_System_Object_* this_ptr, app::Action_1_Exception_* on_rejected)
    IL2CPP_REGISTER_METHOD(
        0x02FF84F0,
        app::IPromise_1_System_Object_*,
        Then_1,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_1_* on_resolved
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD3CE0,
        app::IPromise*,
        Then_2,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_* on_resolved
    )
    IL2CPP_REGISTER_METHOD(0x02AD3D10, app::IPromise_1_System_Object_*, Then_3, app::Promise_1_System_Object_* this_ptr, app::Action_1_Object_* on_resolved)
    IL2CPP_REGISTER_METHOD(
        0x02FF8BB0,
        app::IPromise_1_System_Object_*,
        Then_4,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_1_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD3D40,
        app::IPromise*,
        Then_5,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_ZenFulcrum_EmbeddedBrowser_IPromise_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD41F0,
        app::IPromise_1_System_Object_*,
        Then_6,
        app::Promise_1_System_Object_* this_ptr,
        app::Action_1_Object_* on_resolved,
        app::Action_1_Exception_* on_rejected
    )
    IL2CPP_REGISTER_METHOD(0x02FF8990, app::IPromise_1_System_Object_*, Then_7, app::Promise_1_System_Object_* this_ptr, app::Func_2_Object_Object_* transform)
    IL2CPP_REGISTER_METHOD(
        0x02FF8990,
        app::IPromise_1_System_Object_*,
        Transform,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_Object_* transform
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD46E0,
        void,
        ActionHandlers,
        app::Promise_1_System_Object_* this_ptr,
        app::IRejectable* result_promise,
        app::Action_1_Object_* resolve_handler,
        app::Action_1_Exception_* reject_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF8990,
        app::IPromise_1_System_Collections_Generic_IEnumerable_1_*,
        ThenAll_1,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1__1* chain
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD47F0,
        app::IPromise*,
        ThenAll_2,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1__2* chain
    )
    IL2CPP_REGISTER_METHOD(0x02AD4A40, app::IPromise_1_System_Collections_Generic_IEnumerable_1_*, All_1, app::IPromise_1_System_Object___Array* promises)
    IL2CPP_REGISTER_METHOD(
        0x02AD4AC0,
        app::IPromise_1_System_Collections_Generic_IEnumerable_1_*,
        All_2,
        app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_* promises
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF8990,
        app::IPromise_1_System_Object_*,
        ThenRace_1,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1__1* chain
    )
    IL2CPP_REGISTER_METHOD(
        0x02AD5160,
        app::IPromise*,
        ThenRace_2,
        app::Promise_1_System_Object_* this_ptr,
        app::Func_2_Object_System_Collections_Generic_IEnumerable_1__2* chain
    )
    IL2CPP_REGISTER_METHOD(0x02AD54D0, app::IEnumerator*, ToWaitFor, app::Promise_1_System_Object_* this_ptr, bool abort_on_fail)
    IL2CPP_REGISTER_METHOD(0x02AD5BA0, app::IPromise_1_System_Object_*, Race_1, app::IPromise_1_System_Object___Array* promises)
    IL2CPP_REGISTER_METHOD(0x02AD5C20, app::IPromise_1_System_Object_*, Race_2, app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_1_* promises)
    IL2CPP_REGISTER_METHOD(0x02AD6200, app::IPromise_1_System_Object_*, Resolved, app::Object* promised_value)
    IL2CPP_REGISTER_METHOD(0x02AD63C0, app::IPromise_1_System_Object_*, Rejected, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD6580, void, __ctor_b__18_0, app::Promise_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02AD65B0, void, __ctor_b__18_1, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD65E0, void, _Done_b__27_0, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD6690, void, _Done_b__28_0, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x02AD6740, void, _Done_b__29_0, app::Promise_1_System_Object_* this_ptr, app::Exception* ex)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_System_Object_
