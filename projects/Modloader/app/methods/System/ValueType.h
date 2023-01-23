#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValueType.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ValueType {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ValueType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314B030, bool, InternalEquals, (app::Object * o1, app::Object* o2, app::Object__Array** fields))
    IL2CPP_REGISTER_METHOD(0x0314B040, bool, DefaultEquals, (app::Object * o1, app::Object* o2))
    IL2CPP_REGISTER_METHOD(0x01A13D40, bool, Equals, (app::ValueType * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0314B1E0, int32_t, InternalGetHashCode, (app::Object * o, app::Object__Array** fields))
    IL2CPP_REGISTER_METHOD(0x0314B1F0, int32_t, GetHashCode, (app::ValueType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314B280, app::String*, ToString, (app::ValueType * this_ptr))
} // namespace app::classes::System::ValueType
