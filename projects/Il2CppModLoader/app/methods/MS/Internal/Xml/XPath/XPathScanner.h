#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::XPath::XPathScanner {
    IL2CPP_REGISTER_METHOD(0x021DFD20, void, ctor, (app::XPathScanner * this_ptr, app::String* xpath_expr))
    IL2CPP_REGISTER_METHODINFO(0x047665A8, XPathScanner__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_SourceText, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6D800, uint16_t, get_CurerntChar, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021DFE30, bool, NextChar, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, app::XPathScanner_LexKind__Enum, get_Kind, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Name, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Prefix, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_StringValue, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021DFE90, double, get_NumberValue, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_CanBeFunction, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021DFEA0, void, SkipSpace, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021DFF40, bool, NextLex, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BEE0, XPathScanner_NextLex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021E0560, double, ScanNumber, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E0760, double, ScanFraction, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E08A0, app::String*, ScanString, (app::XPathScanner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047218F0, XPathScanner_ScanString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021E0A50, app::String*, ScanName, (app::XPathScanner * this_ptr))
} // namespace app::classes::MS::Internal::Xml::XPath::XPathScanner
