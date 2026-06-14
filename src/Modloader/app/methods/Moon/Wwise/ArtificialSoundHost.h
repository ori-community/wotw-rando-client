#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAuxSendArray.h>
#include <Modloader/app/structs/ArtificialSoundHost.h>
#include <Modloader/app/structs/ISoundListener.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Wwise::ArtificialSoundHost {
    IL2CPP_REGISTER_METHOD(0x02708AF0, void, ctor, app::ArtificialSoundHost* this_ptr, uint64_t i)
    IL2CPP_REGISTER_METHOD(0x02708BC0, bool, IsActiveVersion, app::ArtificialSoundHost* this_ptr, int32_t version)
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsActive, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Version, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02708BD0, app::Vector3, get_Position, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02708D10, app::Quaternion, get_Rotation, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, uint64_t, get_GameObject, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, uint64_t, get_Id, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ISoundListener*, get_AsListener, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02708E70, void, Allocate, app::ArtificialSoundHost* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02709000, void, Release, app::ArtificialSoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, AttachTo, app::ArtificialSoundHost* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02709210, void, Place, app::ArtificialSoundHost* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x027092E0,
        void,
        SetGameObjectAuxSendValues,
        uint64_t in_game_object_i_d,
        app::AkAuxSendArray* in_a_aux_send_values,
        uint32_t in_u_num_send_values
    )
} // namespace app::classes::Moon::Wwise::ArtificialSoundHost
