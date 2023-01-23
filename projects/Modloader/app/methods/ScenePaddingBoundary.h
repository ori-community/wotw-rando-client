#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/ScenePaddingBoundary.h>

namespace app::classes::ScenePaddingBoundary {
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, (app::ScenePaddingBoundary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB1690, void, ctor, (app::ScenePaddingBoundary * this_ptr))
} // namespace app::classes::ScenePaddingBoundary
