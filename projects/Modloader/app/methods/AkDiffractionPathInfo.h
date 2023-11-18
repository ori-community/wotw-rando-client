#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkDiffractionPathInfo.h>
#include <Modloader/app/structs/AkTransform.h>
#include <Modloader/app/structs/AkVector.h>

namespace app::classes::AkDiffractionPathInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkDiffractionPathInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026DF2E0, void*, getCPtr, (app::AkDiffractionPathInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkDiffractionPathInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026DF370, void, Finalize, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DF3F0, void, Dispose, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DF600, void, set_virtualPos, (app::AkDiffractionPathInfo * this_ptr, app::AkTransform* value))
    IL2CPP_REGISTER_METHOD(0x026DF740, app::AkTransform*, get_virtualPos, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DF950, void, set_nodeCount, (app::AkDiffractionPathInfo * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026DFA80, uint32_t, get_nodeCount, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DFBA0, void, set_diffraction, (app::AkDiffractionPathInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026DFCD0, float, get_diffraction, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DFDF0, void, set_totLength, (app::AkDiffractionPathInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026DFF20, float, get_totLength, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E0040, void, set_obstructionValue, (app::AkDiffractionPathInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026E0170, float, get_obstructionValue, (app::AkDiffractionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E0290, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x026E0320, app::AkVector*, GetNodes, (app::AkDiffractionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x026E0540, float, GetAngles, (app::AkDiffractionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x026E0670, uint64_t, GetPortals, (app::AkDiffractionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x026E07A0, uint64_t, GetRooms, (app::AkDiffractionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x026E08D0, void, Clone, (app::AkDiffractionPathInfo * this_ptr, app::AkDiffractionPathInfo* other))
    IL2CPP_REGISTER_METHOD(0x026E09F0, void, ctor_2, (app::AkDiffractionPathInfo * this_ptr))
} // namespace app::classes::AkDiffractionPathInfo
