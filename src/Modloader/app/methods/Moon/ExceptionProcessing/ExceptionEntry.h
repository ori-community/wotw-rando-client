#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionEntry.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ExceptionProcessing::ExceptionEntry {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Id, app::ExceptionEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Id, app::ExceptionEntry* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_StackTrace, app::ExceptionEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_StackTrace, app::ExceptionEntry* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Message, app::ExceptionEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Message, app::ExceptionEntry* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01986FA0, void, ctor, app::ExceptionEntry* this_ptr, int32_t id, app::String* stack_trace, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01987110, void, AddEntry, app::ExceptionEntry* this_ptr, app::String* entry)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IEnumerable_1_System_String_*, get_Entries, app::ExceptionEntry* this_ptr)
} // namespace app::classes::Moon::ExceptionProcessing::ExceptionEntry
