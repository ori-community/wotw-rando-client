#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::Emit::ILGenerator {
    IL2CPP_REGISTER_METHOD(0x02680C20, app::LocalBuilder*, DeclareLocal, (app::ILGenerator * this_ptr, app::Type* local_type))
    IL2CPP_REGISTER_METHODINFO(0x0471C278, ILGenerator_DeclareLocal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680C70, app::Label, DefineLabel, (app::ILGenerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047208B8, ILGenerator_DefineLabel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680CC0, void, Emit_1, (app::ILGenerator * this_ptr, app::OpCode opcode))
    IL2CPP_REGISTER_METHODINFO(0x0476E140, ILGenerator_Emit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680D10, void, Emit_2, (app::ILGenerator * this_ptr, app::OpCode opcode, int32_t arg))
    IL2CPP_REGISTER_METHODINFO(0x0470EF38, ILGenerator_Emit_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680D60, void, Emit_3, (app::ILGenerator * this_ptr, app::OpCode opcode, app::ConstructorInfo* con))
    IL2CPP_REGISTER_METHODINFO(0x04784DC8, ILGenerator_Emit_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680DB0, void, Emit_4, (app::ILGenerator * this_ptr, app::OpCode opcode, app::Label label))
    IL2CPP_REGISTER_METHODINFO(0x04789238, ILGenerator_Emit_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680E00, void, Emit_5, (app::ILGenerator * this_ptr, app::OpCode opcode, app::LocalBuilder* local))
    IL2CPP_REGISTER_METHODINFO(0x0477F930, ILGenerator_Emit_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680E50, void, Emit_6, (app::ILGenerator * this_ptr, app::OpCode opcode, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHODINFO(0x04790C38, ILGenerator_Emit_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680EA0, void, Emit_7, (app::ILGenerator * this_ptr, app::OpCode opcode, app::MethodInfo_1* meth))
    IL2CPP_REGISTER_METHODINFO(0x04736928, ILGenerator_Emit_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680EF0, void, Emit_8, (app::ILGenerator * this_ptr, app::OpCode opcode, app::Type* cls))
    IL2CPP_REGISTER_METHODINFO(0x0478AFF0, ILGenerator_Emit_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680F40, void, MarkLabel, (app::ILGenerator * this_ptr, app::Label loc))
    IL2CPP_REGISTER_METHODINFO(0x04751D38, ILGenerator_MarkLabel__MethodInfo)
} // namespace app::classes::System::Reflection::Emit::ILGenerator
