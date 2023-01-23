#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComponentCollection.h>
#include <Modloader/app/structs/IComponent__Array.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::ComponentCollection {
    IL2CPP_REGISTER_METHOD(0x024A97C0, void, ctor, (app::ComponentCollection * this_ptr, app::IComponent__Array* components))
    IL2CPP_REGISTER_METHOD(0x024A9800, app::IComponent*, get_Item_1, (app::ComponentCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x024A9B90, app::IComponent*, get_Item_2, (app::ComponentCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0202CB70, void, CopyTo, (app::ComponentCollection * this_ptr, app::IComponent__Array* array, int32_t index))
} // namespace app::classes::System::ComponentModel::ComponentCollection
