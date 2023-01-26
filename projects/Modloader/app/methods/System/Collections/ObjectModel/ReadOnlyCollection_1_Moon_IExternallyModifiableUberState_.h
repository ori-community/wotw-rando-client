#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_.h>
#include <Modloader/app/structs/IExternallyModifiableUberState.h>
#include <Modloader/app/structs/IList_1_Moon_IExternallyModifiableUberState_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ {
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, (app::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ * this_ptr, app::IList_1_Moon_IExternallyModifiableUberState_* list))
    IL2CPP_REGISTER_METHOD(0x02EC2580, app::IExternallyModifiableUberState*, get_Item, (app::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_
