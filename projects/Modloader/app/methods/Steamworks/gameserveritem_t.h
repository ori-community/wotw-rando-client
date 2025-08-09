#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/gameserveritem_t.h>

namespace app::classes::Steamworks::gameserveritem_t {
    IL2CPP_REGISTER_METHOD(0x027AACA0, app::String*, GetGameDir, app::gameserveritem_t* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027AAE20, void, SetGameDir, app::gameserveritem_t* this_ptr, app::String* dir)
    IL2CPP_REGISTER_METHOD(0x027AAEF0, app::String*, GetMap, app::gameserveritem_t* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027AB070, void, SetMap, app::gameserveritem_t* this_ptr, app::String* map)
    IL2CPP_REGISTER_METHOD(0x027AB140, app::String*, GetGameDescription, app::gameserveritem_t* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027AB2C0, void, SetGameDescription, app::gameserveritem_t* this_ptr, app::String* desc)
    IL2CPP_REGISTER_METHOD(0x027AB390, app::String*, GetServerName, app::gameserveritem_t* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027AB560, void, SetServerName, app::gameserveritem_t* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027AB630, app::String*, GetGameTags, app::gameserveritem_t* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027AB7B0, void, SetGameTags, app::gameserveritem_t* this_ptr, app::String* tags)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::gameserveritem_t* this_ptr)
} // namespace app::classes::Steamworks::gameserveritem_t
