#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoTODOAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MonoTODOAttribute_1.h>
#include <Modloader/app/structs/MonoTODOAttribute_2.h>

namespace app::classes::System::MonoTODOAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::MonoTODOAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::MonoTODOAttribute * this_ptr, app::String* comment))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_3, (app::MonoTODOAttribute_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_4, (app::MonoTODOAttribute_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_5, (app::MonoTODOAttribute_2 * this_ptr, app::String* comment))
} // namespace app::classes::System::MonoTODOAttribute
