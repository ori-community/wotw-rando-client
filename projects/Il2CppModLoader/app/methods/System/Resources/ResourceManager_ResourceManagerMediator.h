#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Resources::ResourceManager_ResourceManagerMediator {
    IL2CPP_REGISTER_METHOD(0x01A88460, void, ctor, (app::ResourceManager_ResourceManagerMediator * this_ptr, app::ResourceManager * rm))
    IL2CPP_REGISTER_METHODINFO(0x0476DA10, ResourceManager_ResourceManagerMediator__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A88520, app::String *, get_ModuleDir, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88540, app::Type *, get_LocationInfo, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88560, app::Type *, get_UserResourceSet, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::String *, get_BaseNameField, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00824120, app::CultureInfo *, get_NeutralResourcesCulture, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01869F10, app::String *, GetResourceFileName, (app::ResourceManager_ResourceManagerMediator * this_ptr, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHOD(0x01A88580, bool, get_LookedForSatelliteContractVersion, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A885A0, void, set_LookedForSatelliteContractVersion, (app::ResourceManager_ResourceManagerMediator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01A885C0, app::Version *, get_SatelliteContractVersion, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A885E0, void, set_SatelliteContractVersion, (app::ResourceManager_ResourceManagerMediator * this_ptr, app::Version * value))
    IL2CPP_REGISTER_METHOD(0x01A88600, app::Version *, ObtainSatelliteContractVersion, (app::ResourceManager_ResourceManagerMediator * this_ptr, app::Assembly * a))
    IL2CPP_REGISTER_METHOD(0x01A886A0, app::UltimateResourceFallbackLocation__Enum, get_FallbackLoc, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010648A0, app::RuntimeAssembly *, get_CallingAssembly, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A886C0, app::RuntimeAssembly *, get_MainAssembly, (app::ResourceManager_ResourceManagerMediator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::String *, get_BaseName, (app::ResourceManager_ResourceManagerMediator * this_ptr))
}
