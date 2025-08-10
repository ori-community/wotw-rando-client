#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PositionStateOwner.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::PositionStateOwner {
    IL2CPP_REGISTER_METHOD(0x00C3DD90, void, Awake, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DEA0, void, OnDestroy, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8E4A0, app::Vector3, get_CurrentLocalStartPosition, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DF40, app::Vector3, get_CurrentLocalEndPosition, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DF60, app::Vector3, get_CurrentPosition, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3E130, void, Apply, app::PositionStateOwner* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00C3E370, app::IUberState__Array*, get_AffectingUberStates, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3E3F0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3E5C0, void, OnDrawGizmos, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3E9B0, void, ctor, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::PositionStateOwner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::PositionStateOwner* this_ptr)
} // namespace app::classes::Moon::PositionStateOwner
