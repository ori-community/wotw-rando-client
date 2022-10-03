#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Index___c {
    IL2CPP_REGISTER_METHOD(0x01E3F5A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Index_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092ABE0, bool, __ctor_b__22_0, (app::Index_c * this_ptr, app::DataViewListener* listener))
    IL2CPP_REGISTER_METHODINFO(0x047989F0, Index_c___ctor_b__22_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E3F6E0, void, _OnListChanged_b__85_0, (app::Index_c * this_ptr, app::DataViewListener* listener, app::ListChangedEventArgs* args, bool arg2, bool arg3))
    IL2CPP_REGISTER_METHODINFO(0x0477E660, Index_c__OnListChanged_b__85_0__MethodInfo)
} // namespace app::classes::System::Data::Index___c
