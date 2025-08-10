#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonByte.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonByte {
    IL2CPP_REGISTER_METHOD(0x02F90770, bool, get_IsCrossSceneReference, app::MoonByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F90830, app::CrossSceneReferenceId, get_CrossSceneReferenceId, app::MoonByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F90970, bool, get_IsStaticValue, app::MoonByte* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F8F210, void, ctor, app::MoonByte* this_ptr, uint8_t static_value)
    IL2CPP_REGISTER_METHOD(0x02F90A10, uint8_t, Resolve, app::MoonByte* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F90BF0, uint8_t, SafeResolve, app::MoonByte* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F90EC0, bool, CanResolve, app::MoonByte* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F91080, bool, TryResolve, app::MoonByte* this_ptr, uint8_t* value, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x023CF080, void, SetStaticValue, app::MoonByte* this_ptr, uint8_t new_value)
    IL2CPP_REGISTER_METHOD(0x02F910E0, void, SetValueInResolver, app::MoonByte* this_ptr, uint8_t new_value, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, app::MoonByte* this_ptr)
} // namespace app::classes::Moon::MoonByte
