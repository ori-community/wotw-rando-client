#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::nintendoSDKPlugin::NetworkInterfaceManager {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsNetworkAvailable, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsNetworkRequestOnHold, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SubmitNetworkRequest, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SubmitNetworkRequestAndWait, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleNetworkRequestErrorResult, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NetworkInterfaceManager * this_ptr))
}
