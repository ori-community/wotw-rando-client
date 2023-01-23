#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Group.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Text::RegularExpressions::Group {
    IL2CPP_REGISTER_METHOD(0x02581490, void, ctor_1, (app::Group * this_ptr, app::String* text, app::Int32__Array* caps, int32_t capcount, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02581530, bool, get_Success, (app::Group * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581540, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x025816F0, void, ctor_2, (app::Group * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732B48, Group__ctor_1__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::Group
