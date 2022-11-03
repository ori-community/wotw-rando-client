#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::WwiseIntegration {
    IL2CPP_REGISTER_METHOD(0x02716110, void, Initialize, (app::WwiseIntegration * this_ptr, app::AkWwiseInitializationSettings* config, app::WwiseBootstrapConfiguration* bootstrap_config))
    IL2CPP_REGISTER_METHODINFO(0x0471D690, WwiseIntegration_Initialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogTime, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027164E0, bool, get_IsInitialized, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02716570, void, Dispose, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02716600, bool, ValidateResult, (app::WwiseIntegration * this_ptr, app::AKRESULT__Enum result, app::String* verb))
    IL2CPP_REGISTER_METHOD(0x02716730, void, Pause, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02716750, void, Resume, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02716770, void, LateUpdate, (app::WwiseIntegration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027168A0, void, ActivateAudio, (app::WwiseIntegration * this_ptr, bool activate))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseIntegration * this_ptr))
} // namespace app::classes::Moon::Wwise::WwiseIntegration
