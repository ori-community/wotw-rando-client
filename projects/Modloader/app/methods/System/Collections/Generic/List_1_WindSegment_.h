#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WindSegment_.h>
#include <Modloader/app/structs/WindSegment.h>

namespace app::classes::System::Collections::Generic::List_1_WindSegment_ {
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_WindSegment_ * this_ptr, app::WindSegment* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WindSegment*, get_Item, (app::List_1_WindSegment_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_WindSegment_
