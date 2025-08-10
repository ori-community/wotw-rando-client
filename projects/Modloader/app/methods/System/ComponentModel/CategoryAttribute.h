#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CategoryAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::CategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x024A6000, app::CategoryAttribute*, get_Action, )
    IL2CPP_REGISTER_METHOD(0x024A6190, app::CategoryAttribute*, get_Appearance, )
    IL2CPP_REGISTER_METHOD(0x024A6320, app::CategoryAttribute*, get_Asynchronous, )
    IL2CPP_REGISTER_METHOD(0x024A64B0, app::CategoryAttribute*, get_Behavior, )
    IL2CPP_REGISTER_METHOD(0x024A6640, app::CategoryAttribute*, get_Data, )
    IL2CPP_REGISTER_METHOD(0x024A67D0, app::CategoryAttribute*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x024A69C0, app::CategoryAttribute*, get_Design, )
    IL2CPP_REGISTER_METHOD(0x024A6B50, app::CategoryAttribute*, get_DragDrop, )
    IL2CPP_REGISTER_METHOD(0x024A6CE0, app::CategoryAttribute*, get_Focus, )
    IL2CPP_REGISTER_METHOD(0x024A6E70, app::CategoryAttribute*, get_Format, )
    IL2CPP_REGISTER_METHOD(0x024A7000, app::CategoryAttribute*, get_Key, )
    IL2CPP_REGISTER_METHOD(0x024A7190, app::CategoryAttribute*, get_Layout, )
    IL2CPP_REGISTER_METHOD(0x024A7320, app::CategoryAttribute*, get_Mouse, )
    IL2CPP_REGISTER_METHOD(0x024A74B0, app::CategoryAttribute*, get_WindowStyle, )
    IL2CPP_REGISTER_METHOD(0x024A7640, void, ctor_1, app::CategoryAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A76E0, void, ctor_2, app::CategoryAttribute* this_ptr, app::String* category)
    IL2CPP_REGISTER_METHOD(0x024A76F0, app::String*, get_Category, app::CategoryAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A7740, bool, Equals, app::CategoryAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x024A78E0, int32_t, GetHashCode, app::CategoryAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A7940, app::String*, GetLocalizedString, app::CategoryAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x024A7F70, bool, IsDefaultAttribute, app::CategoryAttribute* this_ptr)
} // namespace app::classes::System::ComponentModel::CategoryAttribute
