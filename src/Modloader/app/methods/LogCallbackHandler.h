#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogCallbackHandler.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LogCallbackHandler {
    IL2CPP_REGISTER_METHOD(0x0318F920, void, ctor, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0318FB90, void, RemoveHandler, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0318FC30, void, FlushEntriesToFile, app::LogCallbackHandler* this_ptr, app::String* file_path)
    IL2CPP_REGISTER_METHOD(
        0x03190230,
        void,
        HandleException,
        app::LogCallbackHandler* this_ptr,
        app::String* condition,
        app::String* stack_trace,
        app::LogType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x03190430, void, MoveTempEntries, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03190570, int32_t, GetEditorEntriesCount, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03190580, void, ClearLogEntries, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, Show, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE0760, void, Hide, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsVisible, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03190640, bool, ShouldFilterOut, app::LogCallbackHandler* this_ptr, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldShowWarnings, app::LogCallbackHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::LogCallbackHandler
