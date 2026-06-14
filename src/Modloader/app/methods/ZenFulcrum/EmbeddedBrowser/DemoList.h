#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DemoList.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DemoList {
    IL2CPP_REGISTER_METHOD(0x01DD35D0, void, Start, app::DemoList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD3890, void, DemoNav, app::DemoList* this_ptr, int32_t dir)
    IL2CPP_REGISTER_METHOD(0x01DD3990, void, ctor, app::DemoList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD3BF0, void, _Start_b__4_0, app::DemoList* this_ptr, app::JSONNode* args)
    IL2CPP_REGISTER_METHOD(0x01DD3DC0, void, _Start_b__4_1, app::DemoList* this_ptr, app::JSONNode* info)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DemoList
