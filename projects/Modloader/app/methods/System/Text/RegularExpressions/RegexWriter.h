#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/RegexTree.h>
#include <Modloader/app/structs/RegexWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/RegexNode.h>

namespace app::classes::System::Text::RegularExpressions::RegexWriter {
    IL2CPP_REGISTER_METHOD(0x02A78D50, app::RegexCode*, Write, (app::RegexTree * t))
    IL2CPP_REGISTER_METHOD(0x02A78EB0, void, ctor, (app::RegexWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A79120, void, PushInt, (app::RegexWriter * this_ptr, int32_t I))
    IL2CPP_REGISTER_METHOD(0x01B5A5F0, bool, EmptyStack, (app::RegexWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592220, int32_t, PopInt, (app::RegexWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, CurPos, (app::RegexWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A79230, void, PatchJump, (app::RegexWriter * this_ptr, int32_t offset, int32_t jump_dest))
    IL2CPP_REGISTER_METHOD(0x02A79270, void, Emit_1, (app::RegexWriter * this_ptr, int32_t op))
    IL2CPP_REGISTER_METHOD(0x02A79320, void, Emit_2, (app::RegexWriter * this_ptr, int32_t op, int32_t opd1))
    IL2CPP_REGISTER_METHOD(0x02A79410, void, Emit_3, (app::RegexWriter * this_ptr, int32_t op, int32_t opd1, int32_t opd2))
    IL2CPP_REGISTER_METHOD(0x02A79540, int32_t, StringCode, (app::RegexWriter * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x02A796E0, app::ArgumentException*, MakeException, (app::RegexWriter * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02A79830, int32_t, MapCapnum, (app::RegexWriter * this_ptr, int32_t capnum))
    IL2CPP_REGISTER_METHOD(0x02A79940, app::RegexCode*, RegexCodeFromRegexTree, (app::RegexWriter * this_ptr, app::RegexTree* tree))
    IL2CPP_REGISTER_METHOD(0x02A7A080, void, EmitFragment, (app::RegexWriter * this_ptr, int32_t nodetype, app::RegexNode* node, int32_t cur_index))
    IL2CPP_REGISTER_METHODINFO(0x04738E18, RegexWriter_EmitFragment__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::RegexWriter
