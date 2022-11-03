#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::Task_ContingentProperties {
    IL2CPP_REGISTER_METHOD(0x0233B130, void, SetCompleted, (app::Task_ContingentProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233B160, void, DeregisterCancellationCallback, (app::Task_ContingentProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233B220, void, ctor, (app::Task_ContingentProperties * this_ptr))
} // namespace app::classes::System::Threading::Tasks::Task_ContingentProperties
