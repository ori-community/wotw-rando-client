#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestSpiderColliderManager.h>

namespace app::classes::TestSpiderColliderManager {
    IL2CPP_REGISTER_METHOD(0x010DEE40, void, Start, app::TestSpiderColliderManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010DF3E0, void, FixedUpdate, app::TestSpiderColliderManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010DFC60, void, ctor, app::TestSpiderColliderManager* this_ptr)
} // namespace app::classes::TestSpiderColliderManager
