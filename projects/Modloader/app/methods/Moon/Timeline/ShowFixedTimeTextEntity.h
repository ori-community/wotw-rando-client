#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowFixedTimeTextEntity.h>
#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ShowFixedTimeTextEntity {
    IL2CPP_REGISTER_METHOD(0x00785D10, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00785DB0, void, add_FinishedReading, (app::ShowFixedTimeTextEntity * this_ptr, app::Action_1_MessageBox_HideAction_* value))
    IL2CPP_REGISTER_METHOD(0x00785EA0, void, remove_FinishedReading, (app::ShowFixedTimeTextEntity * this_ptr, app::Action_1_MessageBox_HideAction_* value))
    IL2CPP_REGISTER_METHOD(0x00785F90, bool, IsTalkInteraction, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00785FB0, app::SoundHost*, get_EffectiveSoundHost, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007860F0, float, get_Duration, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007862F0, app::MessageProvider*, get_Message, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007863B0, app::MessageControllerB_NpcMessageStyle__Enum, get_Style, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007863C0, void, OnDestroy, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007863F0, void, Finalize, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00786440, void, MoonCleanup, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00786460, void, OnStartPlayback, (app::ShowFixedTimeTextEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00787BD0, app::MoonTimeline*, get_ParentTimeline, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00787CA0, void, OnFinishedReading, (app::ShowFixedTimeTextEntity * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x00788230, void, OnStopPlayback, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007882F0, void, ResetMessageTimer, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00788300, void, UpdateFade, (app::ShowFixedTimeTextEntity * this_ptr, app::TextBox* text, app::ShowFixedTimeTextEntity_TextVisuals* visuals, float time, float duration))
    IL2CPP_REGISTER_METHOD(0x007886A0, void, ResetWriteOut, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007887F0, void, OnUpdateEntity, (app::ShowFixedTimeTextEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00788D40, void, SynchronizeData, (app::ShowFixedTimeTextEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00788D50, void, ctor, (app::ShowFixedTimeTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::Timeline::ShowFixedTimeTextEntity
