#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowAreaMessageAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x005C4190, void, OnStartPlayback, (app::ShowAreaMessageAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005C4250, void, ctor, (app::ShowAreaMessageAnimatorEntity * this_ptr))
} // namespace app::classes::ShowAreaMessageAnimatorEntity
