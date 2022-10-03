#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LabelInfo {
    IL2CPP_REGISTER_METHOD(0x01CE31F0, void, ctor, (app::LabelInfo * this_ptr, app::LabelTarget* node))
    IL2CPP_REGISTER_METHOD(0x01CE3350, app::BranchLabel*, GetLabel, (app::LabelInfo * this_ptr, app::LightCompiler* compiler))
    IL2CPP_REGISTER_METHOD(0x01CE3390, void, Reference, (app::LabelInfo * this_ptr, app::LabelScopeInfo* block))
    IL2CPP_REGISTER_METHOD(0x01CE3450, void, Define, (app::LabelInfo * this_ptr, app::LabelScopeInfo* block))
    IL2CPP_REGISTER_METHODINFO(0x0478D270, LabelInfo_Define__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CE36B0, void, ValidateJump, (app::LabelInfo * this_ptr, app::LabelScopeInfo* reference))
    IL2CPP_REGISTER_METHODINFO(0x047990C0, LabelInfo_ValidateJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CE3B10, void, ValidateFinish, (app::LabelInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D5F8, LabelInfo_ValidateFinish__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CE3BE0, void, EnsureLabel, (app::LabelInfo * this_ptr, app::LightCompiler* compiler))
    IL2CPP_REGISTER_METHOD(0x01CE3C20, bool, DefinedIn, (app::LabelInfo * this_ptr, app::LabelScopeInfo* scope))
    IL2CPP_REGISTER_METHOD(0x00519280, bool, get_HasDefinitions, (app::LabelInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE3D30, app::LabelScopeInfo*, FirstDefinition, (app::LabelInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047448E0, LabelInfo_FirstDefinition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CE3F60, void, AddDefinition, (app::LabelInfo * this_ptr, app::LabelScopeInfo* scope))
    IL2CPP_REGISTER_METHOD(0x01CE41B0, bool, get_HasMultipleDefinitions, (app::LabelInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157A0D0, app::Object*, CommonNode_1, (app::Object * first, app::Object* second, app::Func_2_Object_Object_* parent))
    IL2CPP_REGISTER_METHOD(0x0157A0D0, app::LabelScopeInfo*, CommonNode_2, (app::LabelScopeInfo * first, app::LabelScopeInfo* second, app::Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo_* parent))
    IL2CPP_REGISTER_METHODINFO(0x04709468, LabelInfo_CommonNode_1__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LabelInfo
