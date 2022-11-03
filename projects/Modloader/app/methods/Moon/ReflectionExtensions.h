#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ReflectionExtensions {
    IL2CPP_REGISTER_METHOD(0x025661B0, app::Type__Array*, GetLoadableTypes, (app::Assembly * assembly))
}
