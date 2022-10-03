#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_JSONNode_ {
    IL2CPP_REGISTER_METHOD(0x02AD1E40, void, ctor, (app::Promise_1_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755120, Promise_1_JSONNode___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD2D00, void, Reject, (app::Promise_1_JSONNode_ * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHODINFO(0x047875C0, Promise_1_JSONNode__Reject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD2FB0, void, Resolve, (app::Promise_1_JSONNode_ * this_ptr, app::JSONNode* value))
    IL2CPP_REGISTER_METHODINFO(0x04719E10, Promise_1_JSONNode__Resolve__MethodInfo)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_JSONNode_
