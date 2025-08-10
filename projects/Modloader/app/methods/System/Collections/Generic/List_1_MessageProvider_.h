#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_MessageProvider_.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::System::Collections::Generic::List_1_MessageProvider_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_MessageProvider_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MessageProvider*, get_Item, app::List_1_MessageProvider_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_MessageProvider_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_MessageProvider_* this_ptr, app::MessageProvider* item)
} // namespace app::classes::System::Collections::Generic::List_1_MessageProvider_
