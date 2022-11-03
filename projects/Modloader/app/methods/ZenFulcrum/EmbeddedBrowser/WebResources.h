#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::WebResources {
    IL2CPP_REGISTER_METHOD(0x01674140, void, SendResponse_1, (app::WebResources * this_ptr, int32_t id, app::Byte__Array* data, app::String* mime_type))
    IL2CPP_REGISTER_METHOD(0x01674310, void, SendResponse_2, (app::WebResources * this_ptr, int32_t id, app::String* text, app::String* mime_type))
    IL2CPP_REGISTER_METHOD(0x01674500, void, SendError, (app::WebResources * this_ptr, int32_t id, app::String* html, int32_t error_code))
    IL2CPP_REGISTER_METHOD(0x01674700, void, SendFile, (app::WebResources * this_ptr, int32_t id, app::FileInfo* file, bool force_download))
    IL2CPP_REGISTER_METHOD(0x01674A30, void, SendPreamble, (app::WebResources * this_ptr, int32_t id, app::WebResources_ResponsePreamble* pre))
    IL2CPP_REGISTER_METHOD(0x01674F90, void, SendData, (app::WebResources * this_ptr, int32_t id, app::Byte__Array* data, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x04712D18, WebResources_SendData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016751E0, void, SendEnd, (app::WebResources * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WebResources * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016753A0, void, cctor, ())
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::WebResources
