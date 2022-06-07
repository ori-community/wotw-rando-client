#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::ReadContentAsBinaryHelper {
    IL2CPP_REGISTER_METHOD(0x0199F510, void, Finish, (app::ReadContentAsBinaryHelper * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A768, ReadContentAsBinaryHelper_Finish__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0199F7B0, void, Reset, (app::ReadContentAsBinaryHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199F7C0, bool, MoveToNextContentNode, (app::ReadContentAsBinaryHelper * this_ptr, bool move_if_on_content_node))
}
