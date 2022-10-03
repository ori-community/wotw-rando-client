#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::__Filters {
    IL2CPP_REGISTER_METHOD(0x0314FE00, bool, FilterAttribute, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHODINFO(0x04732D00, _Filters_FilterAttribute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03150160, bool, FilterName, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHODINFO(0x04708378, _Filters_FilterName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03150440, bool, FilterIgnoreCase, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHODINFO(0x04752E88, _Filters_FilterIgnoreCase__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::_Filters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03150740, void, cctor, ())
} // namespace app::classes::System::__Filters
