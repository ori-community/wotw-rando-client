#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Promise_c.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionEventArgs.h>
#include <Modloader/app/structs/Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_.h>
#include <Modloader/app/structs/IPromise.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise___c {
    IL2CPP_REGISTER_METHOD(0x01667CE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Promise_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01667E20, void, __cctor_b__0_0, (app::Promise_c * this_ptr, app::Object* sender, app::ExceptionEventArgs* args))
    IL2CPP_REGISTER_METHOD(0x01667F40, app::IPromise*, _Sequence_b__54_0, (app::Promise_c * this_ptr, app::IPromise* prev_promise, app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_* fn))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ToWaitFor_b__63_0, (app::Promise_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ToWaitFor_b__63_1, (app::Promise_c * this_ptr, app::Exception* ex))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise___c
