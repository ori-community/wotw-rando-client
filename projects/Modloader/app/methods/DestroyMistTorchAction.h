#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyMistTorchAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DestroyMistTorchAction {
    IL2CPP_REGISTER_METHOD(0x00B8BEE0, void, Perform, (app::DestroyMistTorchAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DestroyMistTorchAction * this_ptr))
} // namespace app::classes::DestroyMistTorchAction
