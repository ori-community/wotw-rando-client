#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/AudioEmitterZone.h>
#include <Modloader/app/structs/AudioListenerZone.h>
#include <Modloader/app/structs/Func_1_Single_.h>
#include <Modloader/app/structs/IListenerSyncProcessor.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundListener.h>
#include <Modloader/app/structs/WwiseSyncProcessor.h>
#include <Modloader/app/structs/ZoneProcessor.h>

namespace app::classes::Moon::Wwise::WwiseSyncProcessor {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ActivePositionSyncs, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_MaxPositionSyncs, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_ActiveRTPCTasks, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_MaxRTPCTasks, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022BF7E0, int32_t, get_ActiveListenerZones, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022BF810, int32_t, get_MaxListenerZones, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022BF840, int32_t, get_ActiveEmitterZones, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02717880, int32_t, get_MaxEmitterZones, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, UseZoneSyncProcessor, app::WwiseSyncProcessor* this_ptr, app::ZoneProcessor* processor)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IListenerSyncProcessor*, get_ListenerSyncProcessor, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, UseListenerProcessor, app::WwiseSyncProcessor* this_ptr, app::IListenerSyncProcessor* processor)
    IL2CPP_REGISTER_METHOD(0x027178B0, void, Initialize, app::WwiseSyncProcessor* this_ptr, app::AkWwiseInitializationSettings* config)
    IL2CPP_REGISTER_METHOD(
        0x02717FF0,
        void,
        RegisterRTPCSync_1,
        app::WwiseSyncProcessor* this_ptr,
        app::RTPC* target,
        app::Func_1_Single_* getter,
        app::ISoundHost* host,
        int32_t frame_quantinization
    )
    IL2CPP_REGISTER_METHOD(
        0x02718220,
        void,
        RegisterRTPCSync_2,
        app::WwiseSyncProcessor* this_ptr,
        app::RTPC* target,
        app::Func_1_Single_* getter,
        int32_t frame_quantinization
    )
    IL2CPP_REGISTER_METHOD(0x02718400, void, RegisterPositionSync, app::WwiseSyncProcessor* this_ptr, app::ISoundHost* host, int32_t frame_quantinization)
    IL2CPP_REGISTER_METHOD(
        0x027187A0,
        void,
        RegisterListenerZoneSync,
        app::WwiseSyncProcessor* this_ptr,
        app::AudioListenerZone* zone,
        int32_t frame_quantization
    )
    IL2CPP_REGISTER_METHOD(
        0x02718890,
        void,
        RegisterEmitterZoneSync,
        app::WwiseSyncProcessor* this_ptr,
        app::AudioEmitterZone* zone,
        int32_t frame_quantization
    )
    IL2CPP_REGISTER_METHOD(0x02718980, void, RegisterListenerSync, app::WwiseSyncProcessor* this_ptr, app::SoundListener* sound_listener)
    IL2CPP_REGISTER_METHOD(0x02718AC0, void, ResetListenerTracking, app::WwiseSyncProcessor* this_ptr, app::SoundListener* listener)
    IL2CPP_REGISTER_METHOD(
        0x02718AF0,
        void,
        DefragmentPositionTasks,
        app::WwiseSyncProcessor* this_ptr,
        app::PositionSyncTask__Array* arg_tasks,
        int32_t* valid_size
    )
    IL2CPP_REGISTER_METHOD(0x02718C60, void, Update, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02718DA0, void, UpdatePositionTasks, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02719150, void, UpdateRtpcTasks, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02719370, int32_t, ValidTasksCount, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02719410, void, CommitPosition, app::WwiseSyncProcessor* this_ptr, app::ISoundHost* artificial_sound_host)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WwiseSyncProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Moon::Wwise::WwiseSyncProcessor
