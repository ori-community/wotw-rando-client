#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayableGraph__Boxed.h>
#include <Modloader/app/structs/DirectorUpdateMode__Enum.h>
#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/AnimationPlayableOutput.h>
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/AnimationClipPlayable.h>

namespace app::classes::UnityEngine::Playables::PlayableGraph {
    IL2CPP_REGISTER_METHOD(0x02964A30, app::PlayableGraph, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x02964AA0, app::PlayableGraph, Create_2, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x00216700, void, Destroy, (app::PlayableGraph__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00216760, bool, IsValid, (app::PlayableGraph__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002167C0, void, EvaluateAnimation, (app::PlayableGraph__Boxed * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002167D0, void, SetTimeUpdateMode, (app::PlayableGraph__Boxed * this_ptr, app::DirectorUpdateMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00216830, int32_t, GetPlayableCount, (app::PlayableGraph__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00216890, int32_t, GetOutputCount, (app::PlayableGraph__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002168F0, void, DestroyOutputInternal, (app::PlayableGraph__Boxed * this_ptr, app::PlayableOutputHandle handle))
    IL2CPP_REGISTER_METHOD(0x00216950, bool, ConnectInternal, (app::PlayableGraph__Boxed * this_ptr, app::PlayableHandle source, int32_t source_output_port, app::PlayableHandle destination, int32_t destination_input_port))
    IL2CPP_REGISTER_METHOD(0x002169E0, void, DisconnectInternal, (app::PlayableGraph__Boxed * this_ptr, app::PlayableHandle playable, int32_t input_port))
    IL2CPP_REGISTER_METHOD(0x00216A50, void, DestroyPlayableInternal, (app::PlayableGraph__Boxed * this_ptr, app::PlayableHandle playable))
    IL2CPP_REGISTER_METHOD(0x02964C20, void, Create_Injected, (app::String * name, app::PlayableGraph* ret))
    IL2CPP_REGISTER_METHOD(0x02964C80, void, Destroy_Injected, (app::PlayableGraph * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02964B20, bool, IsValid_Injected, (app::PlayableGraph * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02964B70, void, EvaluateAnimation_Injected, (app::PlayableGraph * _unity_self, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02964CD0, void, SetTimeUpdateMode_Injected, (app::PlayableGraph * _unity_self, app::DirectorUpdateMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02964BD0, int32_t, GetPlayableCount_Injected, (app::PlayableGraph * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02964D30, int32_t, GetOutputCount_Injected, (app::PlayableGraph * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02964D80, void, DestroyOutputInternal_Injected, (app::PlayableGraph * _unity_self, app::PlayableOutputHandle* handle))
    IL2CPP_REGISTER_METHOD(0x02964DE0, bool, ConnectInternal_Injected, (app::PlayableGraph * _unity_self, app::PlayableHandle* source, int32_t source_output_port, app::PlayableHandle* destination, int32_t destination_input_port))
    IL2CPP_REGISTER_METHOD(0x02964E70, void, DisconnectInternal_Injected, (app::PlayableGraph * _unity_self, app::PlayableHandle* playable, int32_t input_port))
    IL2CPP_REGISTER_METHOD(0x02964EE0, void, DestroyPlayableInternal_Injected, (app::PlayableGraph * _unity_self, app::PlayableHandle* playable))
    IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect_1, (app::PlayableGraph__Boxed * this_ptr, app::Playable source, int32_t source_output_port, app::AnimationLayerMixerPlayable destination, int32_t destination_input_port))
    IL2CPP_REGISTER_METHODINFO(0x04703178, PlayableGraph_Connect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable_1, (app::PlayableGraph__Boxed * this_ptr, app::AnimationLayerMixerPlayable playable))
    IL2CPP_REGISTER_METHODINFO(0x0477FD08, PlayableGraph_DestroyPlayable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable_2, (app::PlayableGraph__Boxed * this_ptr, app::Playable playable))
    IL2CPP_REGISTER_METHODINFO(0x04796BD8, PlayableGraph_DestroyPlayable_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EB20, void, DestroyOutput, (app::PlayableGraph__Boxed * this_ptr, app::AnimationPlayableOutput output))
    IL2CPP_REGISTER_METHODINFO(0x04785B18, PlayableGraph_DestroyOutput__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect_1, (app::PlayableGraph__Boxed * this_ptr, app::AnimationLayerMixerPlayable input, int32_t input_port))
    IL2CPP_REGISTER_METHODINFO(0x04785F50, PlayableGraph_Disconnect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect_2, (app::PlayableGraph__Boxed * this_ptr, app::Playable input, int32_t input_port))
    IL2CPP_REGISTER_METHODINFO(0x047353A0, PlayableGraph_Disconnect_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EBE0, void, Disconnect_3, (app::PlayableGraph__Boxed * this_ptr, app::AnimationMixerPlayable input, int32_t input_port))
    IL2CPP_REGISTER_METHODINFO(0x0471AC10, PlayableGraph_Disconnect_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable_3, (app::PlayableGraph__Boxed * this_ptr, app::AnimationMixerPlayable playable))
    IL2CPP_REGISTER_METHODINFO(0x04706D98, PlayableGraph_DestroyPlayable_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012EB80, void, DestroyPlayable_4, (app::PlayableGraph__Boxed * this_ptr, app::AnimationClipPlayable playable))
    IL2CPP_REGISTER_METHODINFO(0x047434C0, PlayableGraph_DestroyPlayable_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect_2, (app::PlayableGraph__Boxed * this_ptr, app::Playable source, int32_t source_output_port, app::AnimationMixerPlayable destination, int32_t destination_input_port))
    IL2CPP_REGISTER_METHOD(0x0012CDE0, bool, Connect_3, (app::PlayableGraph__Boxed * this_ptr, app::Playable source, int32_t source_output_port, app::Playable destination, int32_t destination_input_port))
} // namespace app::classes::UnityEngine::Playables::PlayableGraph
