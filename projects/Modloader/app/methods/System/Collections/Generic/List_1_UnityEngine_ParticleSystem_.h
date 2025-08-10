#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/ParticleSystem.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_ParticleSystem_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ParticleSystem*, get_Item, app::List_1_UnityEngine_ParticleSystem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_ParticleSystem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UnityEngine_ParticleSystem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_UnityEngine_ParticleSystem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_ParticleSystem_* this_ptr, app::ParticleSystem* item)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_UnityEngine_ParticleSystem_* this_ptr, int32_t index, app::ParticleSystem* value)
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor_2,
        app::List_1_UnityEngine_ParticleSystem_* this_ptr,
        app::IEnumerable_1_UnityEngine_ParticleSystem_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_ParticleSystem_, GetEnumerator, app::List_1_UnityEngine_ParticleSystem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, app::List_1_UnityEngine_ParticleSystem_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_ParticleSystem_
