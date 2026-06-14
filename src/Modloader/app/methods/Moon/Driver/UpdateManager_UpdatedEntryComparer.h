#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateManager_Entry.h>
#include <Modloader/app/structs/UpdateManager_UpdatedEntryComparer.h>

namespace app::classes::Moon::Driver::UpdateManager_UpdatedEntryComparer {
    IL2CPP_REGISTER_METHOD(
        0x0313AD90,
        int32_t,
        Compare,
        app::UpdateManager_UpdatedEntryComparer* this_ptr,
        app::UpdateManager_Entry* x,
        app::UpdateManager_Entry* y
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateManager_UpdatedEntryComparer* this_ptr)
} // namespace app::classes::Moon::Driver::UpdateManager_UpdatedEntryComparer
