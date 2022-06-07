#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::ManagedStreamHelpers {
    IL2CPP_REGISTER_METHOD(0x02530BF0, void, ValidateLoadFromStream, (app::Stream * stream))
    IL2CPP_REGISTER_METHODINFO(0x04732BC0, ManagedStreamHelpers_ValidateLoadFromStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02530D40, void, ManagedStreamRead, (app::Byte__Array * buffer, int32_t offset, int32_t count, app::Stream * stream, void * return_value_address))
    IL2CPP_REGISTER_METHODINFO(0x047494B8, ManagedStreamHelpers_ManagedStreamRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02530E60, void, ManagedStreamSeek, (int64_t offset, uint32_t origin, app::Stream * stream, void * return_value_address))
    IL2CPP_REGISTER_METHODINFO(0x0476B648, ManagedStreamHelpers_ManagedStreamSeek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02530F60, void, ManagedStreamLength, (app::Stream * stream, void * return_value_address))
    IL2CPP_REGISTER_METHODINFO(0x047047E0, ManagedStreamHelpers_ManagedStreamLength__MethodInfo)
}
