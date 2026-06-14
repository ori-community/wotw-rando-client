#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed.h>

namespace app::classes::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5 {
    IL2CPP_REGISTER_METHOD(0x001CF570, void, MoveNext, app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001CF580,
        void,
        SetStateMachine,
        app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5
