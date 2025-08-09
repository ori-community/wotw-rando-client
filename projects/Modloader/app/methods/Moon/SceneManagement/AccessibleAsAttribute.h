#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AccessibleAsAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::SceneManagement::AccessibleAsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AccessibleAsAttribute* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_MappedType, app::AccessibleAsAttribute* this_ptr)
} // namespace app::classes::Moon::SceneManagement::AccessibleAsAttribute
