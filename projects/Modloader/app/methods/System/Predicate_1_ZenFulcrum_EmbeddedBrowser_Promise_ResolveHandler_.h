#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_.h>
#include <Modloader/app/structs/Promise_ResolveHandler.h>

namespace app::classes::System::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke,
        app::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_* this_ptr,
        app::Promise_ResolveHandler obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A572F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_* this_ptr,
        app::Promise_ResolveHandler obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x008A1BF0,
        bool,
        EndInvoke,
        app::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Predicate_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_
