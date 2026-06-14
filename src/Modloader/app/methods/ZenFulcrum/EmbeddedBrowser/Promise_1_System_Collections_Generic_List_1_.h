#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPromise_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_Cookie_.h>
#include <Modloader/app/structs/Promise_1_System_Collections_Generic_List_1_.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_System_Collections_Generic_List_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02AD6200,
        app::IPromise_1_System_Collections_Generic_List_1_*,
        Resolved,
        app::List_1_ZenFulcrum_EmbeddedBrowser_Cookie_* promised_value
    )
    IL2CPP_REGISTER_METHOD(0x02AD1E40, void, ctor, app::Promise_1_System_Collections_Generic_List_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AD2FB0,
        void,
        Resolve,
        app::Promise_1_System_Collections_Generic_List_1_* this_ptr,
        app::List_1_ZenFulcrum_EmbeddedBrowser_Cookie_* value
    )
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_System_Collections_Generic_List_1_
