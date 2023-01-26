#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Promise_1_JSONNode_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_JSONNode_ {
    IL2CPP_REGISTER_METHOD(0x02AD1E40, void, ctor, (app::Promise_1_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AD2D00, void, Reject, (app::Promise_1_JSONNode_ * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHOD(0x02AD2FB0, void, Resolve, (app::Promise_1_JSONNode_ * this_ptr, app::JSONNode* value))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Promise_1_JSONNode_
