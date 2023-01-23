#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssetReferenceChoiceAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::AssetReferenceChoiceAttribute {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::AssetReferenceChoiceAttribute * this_ptr, app::String* display_name, app::String__Array* choices))
}
