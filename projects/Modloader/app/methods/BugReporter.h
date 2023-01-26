#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BugReporter.h>
#include <Modloader/app/structs/BugReporter_State__Enum.h>
#include <Modloader/app/structs/ExceptionEntry.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_BugReporter_Attachment_.h>
#include <Modloader/app/structs/List_1_System_Byte__1.h>
#include <Modloader/app/structs/List_1_System_String_.h>

namespace app::classes::BugReporter {
    IL2CPP_REGISTER_METHOD(0x00807ED0, uint32_t, Execute, (app::String * path, app::String* parameters, app::String* working_dir))
    IL2CPP_REGISTER_METHOD(0x00808190, void, Start, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00808D20, void, OnApplicationQuit, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00808DB0, void, Update, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080A2E0, void, LimitControlIndex, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080A440, void, FastReport, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080A560, void, ExceptionReport, (app::BugReporter * this_ptr, app::ExceptionEntry* exception))
    IL2CPP_REGISTER_METHOD(0x0080A600, app::String*, GetBuildId, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080A640, void, Activate, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080A780, void, ShowSubmissionQueueCause, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080AF00, bool, CanCreateReport, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080AFB0, void, ReportSetup, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080B2A0, bool, UICollapsed, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080B2B0, void, TrimUpdated, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080B2C0, void, CleanSubmission, (app::BugReporter * this_ptr, bool first_submission))
    IL2CPP_REGISTER_METHOD(0x0080BA20, void, QueueSubmission, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080BB30, bool, VerifyFiles, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080BE60, void, PrepareSubmission, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080D0F0, void, Submit, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080D210, void, Close, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080D280, void, UpdateAttachments, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080D470, void, OnGUI, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080F7F0, void, SuspendGameplay, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080FC00, void, ResumeGameplay, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080FEB0, void, RequestMuteAudio, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0080FF40, void, SetRecording, (app::BugReporter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008100C0, void, StartCheckingForRecording, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00810100, bool, RecordingStarted, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00810150, void, InitializeSubmission, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00810370, bool, CheckReplay, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00810540, app::String*, GetLastRecording, (app::BugReporter * this_ptr, bool recording_available))
    IL2CPP_REGISTER_METHOD(0x00810A10, void, DisplayVideoEditor, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00810AE0, void, TakeScreenshot, (app::BugReporter * this_ptr, bool include))
    IL2CPP_REGISTER_METHOD(0x00810FC0, void, CaptureScreenshot, (app::BugReporter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x008110E0, void, LateUpdate, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008113F0, app::IEnumerator*, RecordScreenshot, (app::BugReporter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00811540, app::List_1_System_String_*, GetIncludedScreenshots, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008117B0, bool, ScreenshotsReady, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00811950, void, AddScreenshot, (app::BugReporter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00811AC0, void, AddRecording, (app::BugReporter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00811BA0, void, UpdateRecordings, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00811FF0, app::List_1_BugReporter_Attachment_*, GetRecordings, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00812330, app::List_1_System_String_*, GetIncludedRecordings, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CleanDirectory, (app::BugReporter * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00812670, void, UpdateState, (app::BugReporter * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00812A50, void, ChangeState, (app::BugReporter * this_ptr, app::BugReporter_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00812DA0, void, Connect, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813070, void, Ping, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008131F0, void, Send, (app::BugReporter * this_ptr, app::List_1_System_Byte__1* messages))
    IL2CPP_REGISTER_METHOD(0x008132E0, void, NotifyServer, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008138E0, void, SendExceptionDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813AF0, void, RequestDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813CC0, void, ReceiveDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00720040, app::String*, GetRecordingDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813F90, app::String*, GetFFmpegDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::String*, GetOBSCommandDirectory, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00813FB0, void, ctor, (app::BugReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008144B0, void, cctor, ())
} // namespace app::classes::BugReporter
