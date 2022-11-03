#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::LikeNode {
    IL2CPP_REGISTER_METHOD(0x01E3FFB0, void, ctor, (app::LikeNode * this_ptr, app::DataTable* table, int32_t op, app::ExpressionNode* left, app::ExpressionNode* right))
    IL2CPP_REGISTER_METHOD(0x01E3FFD0, app::Object*, Eval, (app::LikeNode * this_ptr, app::DataRow* row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHOD(0x01E40680, app::String*, AnalyzePattern, (app::LikeNode * this_ptr, app::String* pat))
    IL2CPP_REGISTER_METHODINFO(0x0470C8D0, LikeNode_AnalyzePattern__MethodInfo)
} // namespace app::classes::System::Data::LikeNode
