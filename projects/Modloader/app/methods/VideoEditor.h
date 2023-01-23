#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VideoEditor.h>
#include <Modloader/app/structs/VideoPlayer.h>

namespace app::classes::VideoEditor {
    IL2CPP_REGISTER_METHOD(0x008BBD50, uint32_t, Execute, (app::String * path, app::String* parameters, app::String* working_dir))
    IL2CPP_REGISTER_METHOD(0x008BC010, void, Start, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BC9F0, void, Display, (app::VideoEditor * this_ptr, app::String* video_file))
    IL2CPP_REGISTER_METHOD(0x008BCD80, void, Hide, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BCFE0, void, Play, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD1F0, void, Pause, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD2D0, void, Record, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD500, void, StopRecord, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD6D0, void, Close, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD700, void, UpdateTrim, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BD820, void, PrepareTrim, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BDEE0, void, CheckTrim, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BDFF0, void, Clear, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE230, void, Snapshot, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE2E0, void, Step, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE340, void, SlowDown, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE400, void, SpeedUp, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE4C0, app::String*, TimeToTimestamp, (app::VideoEditor * this_ptr, double time))
    IL2CPP_REGISTER_METHOD(0x008BE640, void, EndReached, (app::VideoEditor * this_ptr, app::VideoPlayer* player))
    IL2CPP_REGISTER_METHODINFO(0x04781E58, VideoEditor_EndReached__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008BE690, void, SeekCompleted, (app::VideoEditor * this_ptr, app::VideoPlayer* player))
    IL2CPP_REGISTER_METHODINFO(0x04768EA8, VideoEditor_SeekCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008BE6A0, void, PrepareCompleted, (app::VideoEditor * this_ptr, app::VideoPlayer* player))
    IL2CPP_REGISTER_METHODINFO(0x0470C5B8, VideoEditor_PrepareCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008BE720, void, SetTrimStart, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE820, void, SetTrimEnd, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BE920, void, SkipFromCurrent, (app::VideoEditor * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x008BE9F0, float, GetTrimStart, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BEA80, float, GetTrimEnd, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BEB10, void, SwitchVideoEvent, (app::VideoEditor * this_ptr, int32_t f_m_vevent))
    IL2CPP_REGISTER_METHOD(0x008BEB60, void, OnGUI, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BEDA0, void, Update, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BFDD0, void, SkipToPercent, (app::VideoEditor * this_ptr, float pct))
    IL2CPP_REGISTER_METHOD(0x008BFF60, float, GetProgress, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C00D0, void, ResizeVideo, (app::VideoEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C0350, void, ctor, (app::VideoEditor * this_ptr))
} // namespace app::classes::VideoEditor
