#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Measurement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ContinuousIntegration::Measurement {
    IL2CPP_REGISTER_METHOD(0x0318B230, void, ctor, app::Measurement* this_ptr, app::String* statistic)
    IL2CPP_REGISTER_METHOD(0x0318B390, void, Dispose, app::Measurement* this_ptr)
} // namespace app::classes::Moon::ContinuousIntegration::Measurement
