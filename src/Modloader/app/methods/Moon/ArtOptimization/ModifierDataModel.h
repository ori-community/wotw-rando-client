#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ModifierDataModel.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::ArtOptimization::ModifierDataModel {
    IL2CPP_REGISTER_METHOD(0x0134BC40, void, ctor, app::ModifierDataModel* this_ptr, app::Type* type, bool is_active, app::String* name, app::Color color)
    IL2CPP_REGISTER_METHOD(0x0134BC90, void, Deserialize, app::ModifierDataModel* this_ptr)
} // namespace app::classes::Moon::ArtOptimization::ModifierDataModel
