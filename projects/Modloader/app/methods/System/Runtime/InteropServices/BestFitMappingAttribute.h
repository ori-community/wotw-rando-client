#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BestFitMappingAttribute.h>

namespace app::classes::System::Runtime::InteropServices::BestFitMappingAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::BestFitMappingAttribute * this_ptr, bool best_fit_mapping))
}
