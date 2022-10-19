#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectReader_TopLevelAssemblyTypeResolver {
        inline app::ObjectReader_TopLevelAssemblyTypeResolver__Class** type_info = (app::ObjectReader_TopLevelAssemblyTypeResolver__Class**)(modloader::win::memory::resolve_rva(0x0477AFB0));
        inline app::ObjectReader_TopLevelAssemblyTypeResolver__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectReader_TopLevelAssemblyTypeResolver__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader", "TopLevelAssemblyTypeResolver");
        }
        inline app::ObjectReader_TopLevelAssemblyTypeResolver* create() {
            return il2cpp::create_object<app::ObjectReader_TopLevelAssemblyTypeResolver>(get_class());
        }
    } // namespace ObjectReader_TopLevelAssemblyTypeResolver
} // namespace app::classes::types
