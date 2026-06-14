#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObjectDataProvider.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GameObjectDataProvider {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01697150, app::Vector3, get_LocalPosition, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F88130, void, ctor, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::GameObjectDataProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::GameObjectDataProvider* this_ptr)
} // namespace app::classes::GameObjectDataProvider
