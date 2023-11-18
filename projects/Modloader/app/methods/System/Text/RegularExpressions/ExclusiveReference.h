#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ExclusiveReference.h>

namespace app::classes::System::Text::RegularExpressions::ExclusiveReference {
    IL2CPP_REGISTER_METHOD(0x02581350, app::Object*, Get, (app::ExclusiveReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581380, void, Release, (app::ExclusiveReference * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExclusiveReference * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::ExclusiveReference
