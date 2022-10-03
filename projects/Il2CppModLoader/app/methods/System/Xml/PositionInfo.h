#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::PositionInfo {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLineInfo, (app::PositionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_LineNumber, (app::PositionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_LinePosition, (app::PositionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199E420, app::PositionInfo*, GetPositionInfo, (app::Object * o))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PositionInfo * this_ptr))
} // namespace app::classes::System::Xml::PositionInfo
