#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/ObjectReader_TopLevelAssemblyTypeResolver.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ObjectReader_TopLevelAssemblyTypeResolver* this_ptr, app::Assembly* top_level_assembly)
    IL2CPP_REGISTER_METHOD(
        0x01D9A130,
        app::Type*,
        ResolveType,
        app::ObjectReader_TopLevelAssemblyTypeResolver* this_ptr,
        app::Assembly* assembly,
        app::String* simple_type_name,
        bool ignore_case
    )
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver
