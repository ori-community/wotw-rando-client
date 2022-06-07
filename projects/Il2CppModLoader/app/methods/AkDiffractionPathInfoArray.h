#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkDiffractionPathInfoArray {
    IL2CPP_REGISTER_METHOD(0x026E0B10, void, ctor, (app::AkDiffractionPathInfoArray * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x026E0BA0, int32_t, get_StructureSize, (app::AkDiffractionPathInfoArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E0C30, app::AkDiffractionPathInfo *, CreateNewReferenceFromIntPtr, (app::AkDiffractionPathInfoArray * this_ptr, void * address))
    IL2CPP_REGISTER_METHOD(0x026E0D80, void, CloneIntoReferenceFromIntPtr, (app::AkDiffractionPathInfoArray * this_ptr, void * address, app::AkDiffractionPathInfo * other))
}
