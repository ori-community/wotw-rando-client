#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Capture.h>
#include <Modloader/app/structs/GroupCollection.h>
#include <Modloader/app/structs/GroupEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Text::RegularExpressions::GroupEnumerator {
    IL2CPP_REGISTER_METHOD(0x01DC2A00, void, ctor, app::GroupEnumerator* this_ptr, app::GroupCollection* rgc)
    IL2CPP_REGISTER_METHOD(0x02582230, bool, MoveNext, app::GroupEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02582290, app::Object*, get_Current, app::GroupEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02582290, app::Capture*, get_Capture, app::GroupEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, app::GroupEnumerator* this_ptr)
} // namespace app::classes::System::Text::RegularExpressions::GroupEnumerator
