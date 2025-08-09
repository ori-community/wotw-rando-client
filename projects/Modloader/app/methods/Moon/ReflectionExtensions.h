#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::Moon::ReflectionExtensions {
    IL2CPP_REGISTER_METHOD(0x025661B0, app::Type__Array*, GetLoadableTypes, app::Assembly* assembly)
}
