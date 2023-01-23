#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw__Boxed.h>
#include <Modloader/app/structs/DrawRendererSortSettings.h>

namespace app::classes::Moon::Rendering::DrawRendererSortSettingsRaw {
    IL2CPP_REGISTER_METHOD(0x00118F30, void, ctor, (app::DrawRendererSortSettingsRaw__Boxed * this_ptr, app::DrawRendererSortSettings source))
}
