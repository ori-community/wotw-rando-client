#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BugReporter_Attachment.h>

namespace app::classes::BugReporter_Attachment {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BugReporter_Attachment * this_ptr))
}
