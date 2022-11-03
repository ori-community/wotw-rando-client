#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PrivateKeySelectionCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, app::AsymmetricAlgorithm*, Invoke, (app::PrivateKeySelectionCallback * this_ptr, app::X509Certificate_1* certificate, app::String* target_host))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::PrivateKeySelectionCallback * this_ptr, app::X509Certificate_1* certificate, app::String* target_host, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::AsymmetricAlgorithm*, EndInvoke, (app::PrivateKeySelectionCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Security::Protocol::Tls::PrivateKeySelectionCallback
