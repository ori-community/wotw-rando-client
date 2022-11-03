#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MaterialVFXSet {
    IL2CPP_REGISTER_METHOD(0x01384820, void, ctor, (app::MaterialVFXSet * this_ptr, app::SurfaceMaterialType__Enum material))
    IL2CPP_REGISTER_METHOD(0x01384C80, app::GameObject*, FindPrefab, (app::MaterialVFXSet * this_ptr, app::MaterialTypeVFXSettings_EffectSize__Enum size))
} // namespace app::classes::MaterialVFXSet
