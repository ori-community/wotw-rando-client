#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngineInternal::WebRequestUtils {
    IL2CPP_REGISTER_METHOD(0x03181C00, app::String*, RedirectTo, (app::String * base_uri, app::String* redirect_uri))
    IL2CPP_REGISTER_METHOD(0x03182010, app::String*, MakeInitialUrl, (app::String * target_url, app::String* local_url))
    IL2CPP_REGISTER_METHODINFO(0x04726450, WebRequestUtils_MakeInitialUrl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031825F0, app::String*, MakeUriString, (app::Uri * target_uri, app::String* target_url, bool prepend_protocol))
    IL2CPP_REGISTER_METHOD(0x03182A90, app::String*, URLDecode, (app::String * encoded))
    IL2CPP_REGISTER_METHOD(0x03182B80, void, cctor, ())
} // namespace app::classes::UnityEngineInternal::WebRequestUtils
