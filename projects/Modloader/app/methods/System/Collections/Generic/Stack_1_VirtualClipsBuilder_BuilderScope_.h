#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope.h>
#include <Modloader/app/structs/Stack_1_VirtualClipsBuilder_BuilderScope_.h>

namespace app::classes::System::Collections::Generic::Stack_1_VirtualClipsBuilder_BuilderScope_ {
    IL2CPP_REGISTER_METHOD(0x02CF7F30, app::VirtualClipsBuilder_BuilderScope*, Peek, (app::Stack_1_VirtualClipsBuilder_BuilderScope_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_VirtualClipsBuilder_BuilderScope_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_VirtualClipsBuilder_BuilderScope_ * this_ptr, app::VirtualClipsBuilder_BuilderScope* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_VirtualClipsBuilder_BuilderScope_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::VirtualClipsBuilder_BuilderScope*, Pop, (app::Stack_1_VirtualClipsBuilder_BuilderScope_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_VirtualClipsBuilder_BuilderScope_
