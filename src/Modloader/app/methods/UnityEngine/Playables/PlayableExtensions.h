#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationClipPlayable.h>
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/PlayableGraph.h>

namespace app::classes::UnityEngine::Playables::PlayableExtensions {
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_1, app::AnimationLayerMixerPlayable playable, int32_t input_index, float weight)
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_1, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E6570, void, DisconnectInput_1, app::AnimationLayerMixerPlayable playable, int32_t input_port)
    IL2CPP_REGISTER_METHOD(0x0156AD50, bool, IsValid_1, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x01539B30, int32_t, AddInput, app::Playable playable, app::Playable source_playable, int32_t source_output_index, float weight)
    IL2CPP_REGISTER_METHOD(0x02FF8050, app::Playable, GetInput_1, app::Playable playable, int32_t input_port)
    IL2CPP_REGISTER_METHOD(0x015E6570, void, DisconnectInput_2, app::Playable playable, int32_t input_port)
    IL2CPP_REGISTER_METHOD(
        0x015E6420,
        void,
        ConnectInput_1,
        app::Playable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index
    )
    IL2CPP_REGISTER_METHOD(0x02FF8050, app::Playable, GetInput_2, app::AnimationLayerMixerPlayable playable, int32_t input_port)
    IL2CPP_REGISTER_METHOD(
        0x015E6420,
        void,
        ConnectInput_2,
        app::AnimationLayerMixerPlayable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index
    )
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_2, app::Playable playable, int32_t input_index, float weight)
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_2, app::Playable playable)
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_1, app::Playable playable, int32_t input_index)
    IL2CPP_REGISTER_METHOD(0x0156AD50, bool, IsValid_2, app::Playable playable)
    IL2CPP_REGISTER_METHOD(0x0156AD30, bool, IsDone, app::Playable playable)
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_1, app::AnimationMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_1, app::AnimationMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_1, app::AnimationMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_1, app::AnimationMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_1, app::AnimationMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_2, app::AnimationMixerPlayable playable, int32_t input_index)
    IL2CPP_REGISTER_METHOD(
        0x015E6420,
        void,
        ConnectInput_3,
        app::AnimationMixerPlayable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index
    )
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_1, app::AnimationMixerPlayable playable, bool value)
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_1, app::AnimationMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x015E6670, void, SetInputWeight_3, app::AnimationMixerPlayable playable, int32_t input_index, float weight)
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_2, app::AnimationClipPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_2, app::AnimationClipPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_2, app::AnimationClipPlayable playable)
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_2, app::AnimationClipPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_2, app::AnimationClipPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_2, app::AnimationClipPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_2, app::AnimationClipPlayable playable, bool value)
    IL2CPP_REGISTER_METHOD(0x026526C0, double, GetSpeed_3, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66C0, void, SetSpeed_3, app::AnimationLayerMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x026526A0, double, GetDuration_3, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x026526E0, double, GetTime_3, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x015E66E0, void, SetTime_3, app::AnimationLayerMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x0153E9C0, float, GetInputWeight_3, app::AnimationLayerMixerPlayable playable, int32_t input_index)
    IL2CPP_REGISTER_METHOD(0x015E6610, void, SetDone_3, app::AnimationLayerMixerPlayable playable, bool value)
    IL2CPP_REGISTER_METHOD(0x015E6630, void, SetDuration_3, app::AnimationLayerMixerPlayable playable, double value)
    IL2CPP_REGISTER_METHOD(0x01539C00, int32_t, GetInputCount_3, app::AnimationMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(
        0x015E6470,
        void,
        ConnectInput_4,
        app::AnimationLayerMixerPlayable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index,
        float weight
    )
    IL2CPP_REGISTER_METHOD(
        0x015E6470,
        void,
        ConnectInput_5,
        app::AnimationMixerPlayable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index,
        float weight
    )
    IL2CPP_REGISTER_METHOD(
        0x015E6470,
        void,
        ConnectInput_6,
        app::Playable playable,
        int32_t input_index,
        app::Playable source_playable,
        int32_t source_output_index,
        float weight
    )
    IL2CPP_REGISTER_METHOD(0x015E6650, void, SetInputCount, app::Playable playable, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_1, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_2, app::AnimationMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x02FF8080, app::PlayableGraph, GetGraph_3, app::Playable playable)
} // namespace app::classes::UnityEngine::Playables::PlayableExtensions
