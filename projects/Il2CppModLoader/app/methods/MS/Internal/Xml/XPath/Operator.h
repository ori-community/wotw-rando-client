#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace inline app::classes::MS::Internal::Xml::XPath : operator{
    IL2CPP_REGISTER_METHOD(0x0200ADC0, void, ctor, inline(app
                                                          :
                                                          operator* this_ptr, inline app
                                                          : operator_Op__Enum op, app::AstNode * opnd1, app::AstNode * opnd2))
    IL2CPP_REGISTER_METHOD(0x00417920, app::AstNode_AstType__Enum, get_Type, inline(app
                                                                                    :
                                                                                    operator* this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D9420, app::XPathResultType__Enum, get_ReturnType, inline(app
                                                                                          :
                                                                                          operator* this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D9440, void, cctor, ())
} // namespace app::classes::MS::Internal::Xml::XPath
