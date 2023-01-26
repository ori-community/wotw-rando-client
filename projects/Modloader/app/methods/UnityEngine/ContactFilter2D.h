#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/ContactFilter2D__Boxed.h>
#include <Modloader/app/structs/LayerMask.h>

namespace app::classes::UnityEngine::ContactFilter2D {
    IL2CPP_REGISTER_METHOD(0x0024A790, app::ContactFilter2D, NoFilter, (app::ContactFilter2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A7E0, void, CheckConsistency, (app::ContactFilter2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A7F0, void, SetLayerMask, (app::ContactFilter2D__Boxed * this_ptr, app::LayerMask layer_mask))
    IL2CPP_REGISTER_METHOD(0x0024A800, void, SetDepth, (app::ContactFilter2D__Boxed * this_ptr, float min_depth, float max_depth))
    IL2CPP_REGISTER_METHOD(0x0316F1C0, app::ContactFilter2D, CreateLegacyFilter, (int32_t layer_mask, float min_depth, float max_depth))
} // namespace app::classes::UnityEngine::ContactFilter2D
