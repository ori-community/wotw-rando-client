#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ObjectReader_TopLevelAssemblyTypeResolver * this_ptr, app::Assembly * top_level_assembly))
    IL2CPP_REGISTER_METHOD(0x01D9A130, app::Type *, ResolveType, (app::ObjectReader_TopLevelAssemblyTypeResolver * this_ptr, app::Assembly * assembly, app::String * simple_type_name, bool ignore_case))
    IL2CPP_REGISTER_METHODINFO(0x04750D00, ObjectReader_TopLevelAssemblyTypeResolver_ResolveType__MethodInfo)
}
