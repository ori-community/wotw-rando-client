#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyGameplayElementsAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DestroyGameplayElementsAction {
    IL2CPP_REGISTER_METHOD(0x00B8A510, void, Perform, (app::DestroyGameplayElementsAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DestroyGameplayElementsAction * this_ptr))
} // namespace app::classes::DestroyGameplayElementsAction
