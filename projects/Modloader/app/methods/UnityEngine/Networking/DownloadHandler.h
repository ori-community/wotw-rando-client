#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DownloadHandler.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Encoding.h>

namespace app::classes::UnityEngine::Networking::DownloadHandler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DD40, void, Release, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DD90, void, Finalize, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DE20, void, Dispose, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, app::Byte__Array*, get_data, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A1590, app::String*, get_text, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Byte__Array*, GetData, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DEF0, app::String*, GetText, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317DFE0, app::Encoding*, GetTextEncoder, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317E2D0, app::String*, GetContentType, (app::DownloadHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317E320, app::Byte__Array*, InternalGetByteArray, (app::DownloadHandler * dh))
} // namespace app::classes::UnityEngine::Networking::DownloadHandler
