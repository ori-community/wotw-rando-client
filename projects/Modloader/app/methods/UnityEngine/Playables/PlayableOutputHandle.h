#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/PlayableOutputHandle__Boxed.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::UnityEngine::Playables::PlayableOutputHandle {
    IL2CPP_REGISTER_METHOD(0x02966B30, app::PlayableOutputHandle, get_Null, ())
    IL2CPP_REGISTER_METHOD(0x00216C90, int32_t, GetHashCode, (app::PlayableOutputHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02966BE0, bool, op_Equality, (app::PlayableOutputHandle lhs, app::PlayableOutputHandle rhs))
    IL2CPP_REGISTER_METHOD(0x00216F50, bool, Equals_1, (app::PlayableOutputHandle__Boxed * this_ptr, app::Object* p))
    IL2CPP_REGISTER_METHOD(0x00217030, bool, Equals_2, (app::PlayableOutputHandle__Boxed * this_ptr, app::PlayableOutputHandle other))
    IL2CPP_REGISTER_METHOD(0x029651B0, bool, CompareVersion, (app::PlayableOutputHandle lhs, app::PlayableOutputHandle rhs))
    IL2CPP_REGISTER_METHOD(0x00217050, bool, IsValid, (app::PlayableOutputHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217060, app::Type*, GetPlayableOutputType, (app::PlayableOutputHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217070, void, SetSourcePlayable, (app::PlayableOutputHandle__Boxed * this_ptr, app::PlayableHandle target))
    IL2CPP_REGISTER_METHOD(0x00217090, void, SetSourceOutputPort, (app::PlayableOutputHandle__Boxed * this_ptr, int32_t port))
    IL2CPP_REGISTER_METHOD(0x02967110, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x029671A0, bool, IsValid_Injected, (app::PlayableOutputHandle * _unity_self))
    IL2CPP_REGISTER_METHOD(0x029671F0, app::Type*, GetPlayableOutputType_Injected, (app::PlayableOutputHandle * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02967240, void, SetSourcePlayable_Injected, (app::PlayableOutputHandle * _unity_self, app::PlayableHandle* target))
    IL2CPP_REGISTER_METHOD(0x029672A0, void, SetSourceOutputPort_Injected, (app::PlayableOutputHandle * _unity_self, int32_t port))
    IL2CPP_REGISTER_METHOD(0x0012D5F0, bool, IsPlayableOutputOfType_1, (app::PlayableOutputHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012D6B0, bool, IsPlayableOutputOfType_2, (app::PlayableOutputHandle__Boxed * this_ptr))
    inline bool operator==(app::PlayableOutputHandle lhs, app::PlayableOutputHandle rhs) {
        return op_Equality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Playables::PlayableOutputHandle
