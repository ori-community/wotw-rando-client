#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TestDownloadServer.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::TestDownloadServer {
    IL2CPP_REGISTER_METHOD(0x0166E610, void, OnEnable, app::TestDownloadServer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166EB40, void, ListenThread, app::TestDownloadServer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166EE70, void, ResponseThread, app::TestDownloadServer* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0166F940, void, OnDisable, app::TestDownloadServer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166F980, void, ctor, app::TestDownloadServer* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::TestDownloadServer
