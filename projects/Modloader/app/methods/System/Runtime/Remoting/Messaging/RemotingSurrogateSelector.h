#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RemotingSurrogateSelector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023192F0, app::ISerializationSurrogate*, GetSurrogate, (app::RemotingSurrogateSelector * this_ptr, app::Type* type, app::StreamingContext context, app::ISurrogateSelector** ssout))
    IL2CPP_REGISTER_METHOD(0x023194C0, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector
