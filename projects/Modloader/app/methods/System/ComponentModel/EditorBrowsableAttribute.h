#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EditorBrowsableAttribute.h>
#include <Modloader/app/structs/EditorBrowsableState__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::EditorBrowsableAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_1, app::EditorBrowsableAttribute* this_ptr, app::EditorBrowsableState__Enum state)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, ctor_2, app::EditorBrowsableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EditorBrowsableState__Enum, get_State, app::EditorBrowsableAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FE8070, bool, Equals, app::EditorBrowsableAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, app::EditorBrowsableAttribute* this_ptr)
} // namespace app::classes::System::ComponentModel::EditorBrowsableAttribute
