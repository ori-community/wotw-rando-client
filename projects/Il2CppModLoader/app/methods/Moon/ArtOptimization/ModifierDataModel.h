#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::ModifierDataModel {
    IL2CPP_REGISTER_METHOD(0x0134BC40, void, ctor, (app::ModifierDataModel * this_ptr, app::Type* type, bool is_active, app::String* name, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0134BC90, void, Deserialize, (app::ModifierDataModel * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::ModifierDataModel
