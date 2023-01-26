#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalBuilder.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/Label.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/OpCode.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::Emit::ILGenerator {
    IL2CPP_REGISTER_METHOD(0x02680C20, app::LocalBuilder*, DeclareLocal, (app::ILGenerator * this_ptr, app::Type* local_type))
    IL2CPP_REGISTER_METHOD(0x02680C70, app::Label, DefineLabel, (app::ILGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680CC0, void, Emit_1, (app::ILGenerator * this_ptr, app::OpCode opcode))
    IL2CPP_REGISTER_METHOD(0x02680D10, void, Emit_2, (app::ILGenerator * this_ptr, app::OpCode opcode, int32_t arg))
    IL2CPP_REGISTER_METHOD(0x02680D60, void, Emit_3, (app::ILGenerator * this_ptr, app::OpCode opcode, app::ConstructorInfo* con))
    IL2CPP_REGISTER_METHOD(0x02680DB0, void, Emit_4, (app::ILGenerator * this_ptr, app::OpCode opcode, app::Label label))
    IL2CPP_REGISTER_METHOD(0x02680E00, void, Emit_5, (app::ILGenerator * this_ptr, app::OpCode opcode, app::LocalBuilder* local))
    IL2CPP_REGISTER_METHOD(0x02680E50, void, Emit_6, (app::ILGenerator * this_ptr, app::OpCode opcode, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x02680EA0, void, Emit_7, (app::ILGenerator * this_ptr, app::OpCode opcode, app::MethodInfo_1* meth))
    IL2CPP_REGISTER_METHOD(0x02680EF0, void, Emit_8, (app::ILGenerator * this_ptr, app::OpCode opcode, app::Type* cls))
    IL2CPP_REGISTER_METHOD(0x02680F40, void, MarkLabel, (app::ILGenerator * this_ptr, app::Label loc))
} // namespace app::classes::System::Reflection::Emit::ILGenerator
