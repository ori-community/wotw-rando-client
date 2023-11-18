#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IGhostFrameData_.h>
#include <Modloader/app/structs/IGhostFrameData.h>
#include <Modloader/app/structs/IGhostFrameData__Array.h>
#include <Modloader/app/structs/List_1_T_Enumerator_IGhostFrameData_.h>

namespace app::classes::System::Collections::Generic::List_1_IGhostFrameData_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IGhostFrameData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IGhostFrameData_ * this_ptr, app::IGhostFrameData* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_IGhostFrameData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IGhostFrameData__Array*, ToArray, (app::List_1_IGhostFrameData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IGhostFrameData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IGhostFrameData_, GetEnumerator, (app::List_1_IGhostFrameData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_IGhostFrameData_
