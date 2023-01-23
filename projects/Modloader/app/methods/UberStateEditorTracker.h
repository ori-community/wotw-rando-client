#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateEditorTracker.h>

namespace app::classes::UberStateEditorTracker {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateEditorTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::UberStateEditorTracker
