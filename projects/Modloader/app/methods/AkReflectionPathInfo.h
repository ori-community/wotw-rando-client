#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkReflectionPathInfo.h>
#include <Modloader/app/structs/AkAcousticSurface.h>
#include <Modloader/app/structs/AkVector.h>

namespace app::classes::AkReflectionPathInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkReflectionPathInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01893410, void*, getCPtr, (app::AkReflectionPathInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkReflectionPathInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x018934A0, void, Finalize, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01893520, void, Dispose, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01893730, void, set_imageSource, (app::AkReflectionPathInfo * this_ptr, app::AkVector* value))
    IL2CPP_REGISTER_METHOD(0x01893870, app::AkVector*, get_imageSource, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01893A80, void, set_numPathPoints, (app::AkReflectionPathInfo * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01893BB0, uint32_t, get_numPathPoints, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01893CD0, void, set_numReflections, (app::AkReflectionPathInfo * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01893E00, uint32_t, get_numReflections, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01893F20, void, set_level, (app::AkReflectionPathInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01894050, float, get_level, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01894170, void, set_isOccluded, (app::AkReflectionPathInfo * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x018942A0, bool, get_isOccluded, (app::AkReflectionPathInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018943D0, int32_t, GetSizeOf, ())
    IL2CPP_REGISTER_METHOD(0x01894460, app::AkVector*, GetPathPoint, (app::AkReflectionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x01894680, app::AkAcousticSurface*, GetAcousticSurface, (app::AkReflectionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x01894880, float, GetDiffraction, (app::AkReflectionPathInfo * this_ptr, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x018949B0, void, Clone, (app::AkReflectionPathInfo * this_ptr, app::AkReflectionPathInfo* other))
    IL2CPP_REGISTER_METHOD(0x01894AD0, void, ctor_2, (app::AkReflectionPathInfo * this_ptr))
} // namespace app::classes::AkReflectionPathInfo
