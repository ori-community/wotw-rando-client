#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/UpdateManager_GenericEntry.h>

namespace app::classes::Moon::Driver::UpdateManager_GenericEntry {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IUpdateHandlerBase*, get_Handler, (app::UpdateManager_GenericEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0313AC20, void, set_Handler, (app::UpdateManager_GenericEntry * this_ptr, app::IUpdateHandlerBase* value))
    IL2CPP_REGISTER_METHOD(0x0313ACD0, void, OnUpdate, (app::UpdateManager_GenericEntry * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0313AD70, void, Reset, (app::UpdateManager_GenericEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0313AC10, void, ctor, (app::UpdateManager_GenericEntry * this_ptr))
} // namespace app::classes::Moon::Driver::UpdateManager_GenericEntry
