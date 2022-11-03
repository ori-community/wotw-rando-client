#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DialogGraph_DialogGraphContext {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, Init, (app::DialogGraph_DialogGraphContext * this_ptr, app::DialogGraph* graph, app::IDialogNode* node))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DialogGraph_DialogGraphContext * this_ptr))
} // namespace app::classes::DialogGraph_DialogGraphContext
