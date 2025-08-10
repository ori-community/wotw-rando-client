#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineViewType__Enum.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Rendering::RenderScopeExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB1A50, bool, match, app::RenderScope__Enum scope, app::MoonRenderPipelineViewType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00EB1B80, bool, hasFlag, app::RenderScope__Enum value, app::RenderScope__Enum flag)
    IL2CPP_REGISTER_METHOD(0x00EB1B90, app::RenderScope__Enum, setFlag, app::RenderScope__Enum scope, app::RenderScope__Enum flag, bool on)
} // namespace app::classes::Moon::Rendering::RenderScopeExtensions
