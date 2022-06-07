#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ReflectionHelper {
    IL2CPP_REGISTER_METHOD(0x008FC270, app::Object *, DoInvoke, (app::Type * type, app::String * method_name, app::Object__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x008FC540, app::Object *, DoInvoke2, (app::Type * type, app::MethodInfo_1 * method_1, app::Object__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x008FC6C0, app::MethodInfo_1 *, GetMethod, (app::Type * type, app::String * method_name, app::Object__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x008FC860, bool, IsConcreteType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01547100, app::Type__Array *, GetAllTypesAssignableFrom, ())
    IL2CPP_REGISTER_METHOD(0x01546B30, app::Type__Array *, GetAllConcreteTypesAssignableFrom, ())
}
