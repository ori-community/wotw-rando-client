#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Networking::UploadHandler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UploadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03181080, void, Release, (app::UploadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031810D0, void, Finalize, (app::UploadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03181160, void, Dispose, (app::UploadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DC50, void, set_contentType, (app::UploadHandler * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x03181230, void, SetContentType, (app::UploadHandler * this_ptr, app::String * new_content_type))
    IL2CPP_REGISTER_METHOD(0x03181230, void, InternalSetContentType, (app::UploadHandler * this_ptr, app::String * new_content_type))
}
