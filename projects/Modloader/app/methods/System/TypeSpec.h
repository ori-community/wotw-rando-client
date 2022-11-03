#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::TypeSpec {
    IL2CPP_REGISTER_METHOD(0x00519290, bool, get_HasModifiers, (app::TypeSpec * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C19B0, app::String*, GetDisplayFullName, (app::TypeSpec * this_ptr, app::TypeSpec_DisplayNameFormat__Enum flags))
    IL2CPP_REGISTER_METHOD(0x027C20E0, app::StringBuilder*, GetModifierString, (app::TypeSpec * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x027C22F0, app::String*, get_DisplayFullName, (app::TypeSpec * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C2320, app::TypeSpec*, Parse_1, (app::String * type_name))
    IL2CPP_REGISTER_METHODINFO(0x04713C48, TypeSpec_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C2430, app::String*, UnescapeInternalName, (app::String * display_name))
    IL2CPP_REGISTER_METHOD(0x027C2610, app::Type*, Resolve, (app::TypeSpec * this_ptr, app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_* assembly_resolver, app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* type_resolver, bool throw_on_error, bool ignore_case))
    IL2CPP_REGISTER_METHODINFO(0x04787298, TypeSpec_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C2EF0, void, AddName, (app::TypeSpec * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x027C30A0, void, AddModifier, (app::TypeSpec * this_ptr, app::ModifierSpec* md))
    IL2CPP_REGISTER_METHOD(0x027C3220, void, SkipSpace, (app::String * name, int32_t* pos))
    IL2CPP_REGISTER_METHOD(0x027C3310, void, BoundCheck, (int32_t idx, app::String* s))
    IL2CPP_REGISTER_METHODINFO(0x04704BB8, TypeSpec_BoundCheck__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C33E0, app::TypeIdentifier*, ParsedTypeIdentifier, (app::String * display_name))
    IL2CPP_REGISTER_METHOD(0x027C33F0, app::TypeSpec*, Parse_2, (app::String * name, int32_t* p, bool is_recurse, bool allow_aqn))
    IL2CPP_REGISTER_METHODINFO(0x04799D48, TypeSpec_Parse_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TypeSpec * this_ptr))
} // namespace app::classes::System::TypeSpec
