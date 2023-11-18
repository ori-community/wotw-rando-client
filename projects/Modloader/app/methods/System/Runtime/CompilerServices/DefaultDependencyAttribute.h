#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultDependencyAttribute.h>
#include <Modloader/app/structs/LoadHint__Enum.h>

namespace app::classes::System::Runtime::CompilerServices::DefaultDependencyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::DefaultDependencyAttribute * this_ptr, app::LoadHint__Enum load_hint_argument))
}
