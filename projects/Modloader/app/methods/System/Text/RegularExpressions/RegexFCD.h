#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RegexPrefix.h>
#include <Modloader/app/structs/RegexTree.h>
#include <Modloader/app/structs/RegexFCD.h>
#include <Modloader/app/structs/RegexFC.h>
#include <Modloader/app/structs/RegexNode.h>

namespace app::classes::System::Text::RegularExpressions::RegexFCD {
    IL2CPP_REGISTER_METHOD(0x02591660, app::RegexPrefix*, FirstChars, (app::RegexTree * t))
    IL2CPP_REGISTER_METHOD(0x025919D0, app::RegexPrefix*, Prefix, (app::RegexTree * tree))
    IL2CPP_REGISTER_METHOD(0x02591DD0, int32_t, Anchors, (app::RegexTree * tree))
    IL2CPP_REGISTER_METHOD(0x02591FF0, int32_t, AnchorFromType, (int32_t type))
    IL2CPP_REGISTER_METHOD(0x02592070, void, ctor, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592110, void, PushInt, (app::RegexFCD * this_ptr, int32_t I))
    IL2CPP_REGISTER_METHOD(0x01B5A5F0, bool, IntIsEmpty, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592220, int32_t, PopInt, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592270, void, PushFC, (app::RegexFCD * this_ptr, app::RegexFC* fc))
    IL2CPP_REGISTER_METHOD(0x01E519D0, bool, FCIsEmpty, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025923C0, app::RegexFC*, PopFC, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592410, app::RegexFC*, TopFC, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592450, app::RegexFC*, RegexFCFromRegexTree, (app::RegexFCD * this_ptr, app::RegexTree* tree))
    IL2CPP_REGISTER_METHOD(0x02592750, void, SkipChild, (app::RegexFCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02592760, void, CalculateFC, (app::RegexFCD * this_ptr, int32_t node_type, app::RegexNode* node, int32_t cur_index))
    IL2CPP_REGISTER_METHODINFO(0x047551E8, RegexFCD_CalculateFC__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::RegexFCD
