#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::PreloadData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PreloadDataDontStripMe, (app::PreloadData * this_ptr))
}
