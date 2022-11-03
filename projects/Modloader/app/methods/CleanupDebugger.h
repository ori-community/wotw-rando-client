#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CleanupDebugger {
    IL2CPP_REGISTER_METHOD(0x01324D40, app::GUIStyle*, get_LabelStyle, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013250B0, app::CleanupDebugger*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01325130, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x013251E0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x01325380, void, EnsureImgui, (app::CleanupDebugger * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x01325470, void, Awake, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013254D0, void, OnDestroy, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013254E0, void, OnRunGC, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013255C0, void, OnRunPanic, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013256A0, void, OnRunProactive, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01325730, void, OnBlockProactive, (app::CleanupDebugger * this_ptr, app::String* reason))
    IL2CPP_REGISTER_METHOD(0x013257D0, void, OnHintPanic, (app::CleanupDebugger * this_ptr, app::String* reason))
    IL2CPP_REGISTER_METHOD(0x01325870, void, OnTeleporter, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01325900, void, OnFader, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01325990, void, OnCleanupResults, (app::CleanupDebugger * this_ptr, app::String* results, bool is_bad))
    IL2CPP_REGISTER_METHOD(0x01325C20, void, UpdateAvailableMem, (app::CleanupDebugger * this_ptr, float available_megs))
    IL2CPP_REGISTER_METHOD(0x01325CE0, void, AddEvent, (app::CleanupDebugger * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01325EC0, void, Update, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326440, void, OnGUI, (app::CleanupDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326720, void, ctor, (app::CleanupDebugger * this_ptr))
} // namespace app::classes::CleanupDebugger
