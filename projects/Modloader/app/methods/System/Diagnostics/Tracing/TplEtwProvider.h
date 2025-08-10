#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TplEtwProvider.h>

namespace app::classes::System::Diagnostics::Tracing::TplEtwProvider {
    IL2CPP_REGISTER_METHOD(0x01A09360, bool, get_Debug, app::TplEtwProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A09390, void, DebugFacilityMessage, app::TplEtwProvider* this_ptr, app::String* facility, app::String* message)
    IL2CPP_REGISTER_METHOD(
        0x01A093C0,
        void,
        DebugFacilityMessage1,
        app::TplEtwProvider* this_ptr,
        app::String* facility,
        app::String* message,
        app::String* arg
    )
    IL2CPP_REGISTER_METHOD(0x01A093F0, void, SetActivityId, app::TplEtwProvider* this_ptr, app::Guid id)
    IL2CPP_REGISTER_METHOD(0x01A09520, void, ctor, app::TplEtwProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A095C0, void, cctor, )
} // namespace app::classes::System::Diagnostics::Tracing::TplEtwProvider
