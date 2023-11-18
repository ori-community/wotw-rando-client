#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/_Filters.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::__Filters {
    IL2CPP_REGISTER_METHOD(0x0314FE00, bool, FilterAttribute, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHOD(0x03150160, bool, FilterName, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHOD(0x03150440, bool, FilterIgnoreCase, (app::_Filters * this_ptr, app::MemberInfo_1* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::_Filters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03150740, void, cctor, ())
} // namespace app::classes::System::__Filters
