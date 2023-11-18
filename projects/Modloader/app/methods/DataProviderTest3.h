#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/DataProviderTest3.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITestInterface.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DataProviderTest3 {
    IL2CPP_REGISTER_METHOD(0x00B8E4A0, app::Vector3, get_TestVector3, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::GameObject*, get_TestGameObject, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, GetExposedString, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, GetExposedIntWithContext, (app::DataProviderTest3 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::ITestInterface*, get_TextInterface, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::DataProviderTest3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::DataProviderTest3 * this_ptr))
} // namespace app::classes::DataProviderTest3
