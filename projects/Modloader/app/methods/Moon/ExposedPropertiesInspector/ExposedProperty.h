#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExposedProperty.h>

namespace app::classes::Moon::ExposedPropertiesInspector::ExposedProperty {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExposedProperty * this_ptr))
}
