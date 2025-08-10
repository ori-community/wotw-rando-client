#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Promise.h>
#include <Modloader/app/structs/Promise_Enumerated.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_Enumerated {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, app::Promise_Enumerated* this_ptr, app::Promise* promise, bool abort_on_fail)
    IL2CPP_REGISTER_METHOD(0x01669070, bool, MoveNext, app::Promise_Enumerated* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::Promise_Enumerated* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, get_Current, app::Promise_Enumerated* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_Enumerated
