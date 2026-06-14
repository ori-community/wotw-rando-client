#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope.h>
#include <Modloader/app/structs/VirtualClipsBuilder_Layout__Enum.h>
#include <Modloader/app/structs/VirtualMoonTimeline.h>

namespace app::classes::VirtualClipsBuilder_BuilderScope {
    IL2CPP_REGISTER_METHOD(0x031C4090, void, ctor, app::VirtualClipsBuilder_BuilderScope* this_ptr, app::VirtualMoonTimeline* root)
    IL2CPP_REGISTER_METHOD(0x031C42B0, app::VirtualClipsBuilder_Layout__Enum, get_Layout, app::VirtualClipsBuilder_BuilderScope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031C4390, void, PushLayout, app::VirtualClipsBuilder_BuilderScope* this_ptr, app::VirtualClipsBuilder_Layout__Enum layout)
    IL2CPP_REGISTER_METHOD(0x031C44C0, void, PopLayout, app::VirtualClipsBuilder_BuilderScope* this_ptr, app::VirtualClipsBuilder_Layout__Enum layout)
} // namespace app::classes::VirtualClipsBuilder_BuilderScope
