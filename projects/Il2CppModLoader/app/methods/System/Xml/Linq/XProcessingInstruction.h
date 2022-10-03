#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Linq::XProcessingInstruction {
    IL2CPP_REGISTER_METHOD(0x0303C470, void, ctor_1, (app::XProcessingInstruction * this_ptr, app::String* target, app::String* data))
    IL2CPP_REGISTER_METHODINFO(0x0476EF30, XProcessingInstruction__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303C540, void, ctor_2, (app::XProcessingInstruction * this_ptr, app::XProcessingInstruction* other))
    IL2CPP_REGISTER_METHODINFO(0x0477EAD8, XProcessingInstruction__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Data, (app::XProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::XmlNodeType__Enum, get_NodeType, (app::XProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Target, (app::XProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303C610, void, WriteTo, (app::XProcessingInstruction * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHODINFO(0x04709D68, XProcessingInstruction_WriteTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0303C6E0, app::XNode*, CloneNode, (app::XProcessingInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303C8C0, void, ValidateName, (app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x047669F8, XProcessingInstruction_ValidateName__MethodInfo)
} // namespace app::classes::System::Xml::Linq::XProcessingInstruction
