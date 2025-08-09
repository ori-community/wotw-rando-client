#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicHierarchyAttribute.h>

namespace app::classes::DynamicHierarchyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DynamicHierarchyAttribute* this_ptr)
}
