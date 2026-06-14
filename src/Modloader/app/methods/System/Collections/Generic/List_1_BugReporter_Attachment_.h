#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BugReporter_Attachment.h>
#include <Modloader/app/structs/IEnumerable_1_BugReporter_Attachment_.h>
#include <Modloader/app/structs/List_1_BugReporter_Attachment_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_BugReporter_Attachment_.h>

namespace app::classes::System::Collections::Generic::List_1_BugReporter_Attachment_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BugReporter_Attachment*, get_Item, app::List_1_BugReporter_Attachment_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_BugReporter_Attachment_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_BugReporter_Attachment_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_BugReporter_Attachment_, GetEnumerator, app::List_1_BugReporter_Attachment_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_BugReporter_Attachment_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_BugReporter_Attachment_* this_ptr, app::BugReporter_Attachment* item)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_BugReporter_Attachment_* this_ptr, app::IEnumerable_1_BugReporter_Attachment_* collection)
} // namespace app::classes::System::Collections::Generic::List_1_BugReporter_Attachment_
