#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_VirtualClipsBuilder_Layout_.h>
#include <Modloader/app/structs/VirtualClipsBuilder_Layout__Enum.h>

namespace app::classes::System::Collections::Generic::Stack_1_VirtualClipsBuilder_Layout_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_VirtualClipsBuilder_Layout_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7150, void, Push, (app::Stack_1_VirtualClipsBuilder_Layout_ * this_ptr, app::VirtualClipsBuilder_Layout__Enum item))
    IL2CPP_REGISTER_METHOD(0x02CF7080, app::VirtualClipsBuilder_Layout__Enum, Peek, (app::Stack_1_VirtualClipsBuilder_Layout_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF70E0, app::VirtualClipsBuilder_Layout__Enum, Pop, (app::Stack_1_VirtualClipsBuilder_Layout_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_VirtualClipsBuilder_Layout_
