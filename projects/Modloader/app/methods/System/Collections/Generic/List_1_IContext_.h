#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IContext_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerable_1_IContext_.h>

namespace app::classes::System::Collections::Generic::List_1_IContext_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IContext_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_IContext_ * this_ptr, app::IEnumerable_1_IContext_* collection))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IContext*, get_Item, (app::List_1_IContext_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IContext_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_IContext_
