#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise___c {
    IL2CPP_REGISTER_METHOD(0x01667CE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Promise_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01667E20, void, __cctor_b__0_0, (app::Promise_c * this_ptr, app::Object* sender, app::ExceptionEventArgs* args))
    IL2CPP_REGISTER_METHODINFO(0x04706EC0, Promise_c___cctor_b__0_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01667F40, app::IPromise*, _Sequence_b__54_0, (app::Promise_c * this_ptr, app::IPromise* prev_promise, app::Func_1_ZenFulcrum_EmbeddedBrowser_IPromise_* fn))
    IL2CPP_REGISTER_METHODINFO(0x0478E748, Promise_c__Sequence_b__54_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ToWaitFor_b__63_0, (app::Promise_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733EB0, Promise_c__ToWaitFor_b__63_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ToWaitFor_b__63_1, (app::Promise_c * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHODINFO(0x0472F788, Promise_c__ToWaitFor_b__63_1__MethodInfo)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise___c
