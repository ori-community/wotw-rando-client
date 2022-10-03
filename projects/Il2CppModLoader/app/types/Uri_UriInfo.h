#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Uri_UriInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Uri_UriInfo__Class** type_info;
        inline app::Uri_UriInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_UriInfo__Class>(type_info, "System", "Uri", "UriInfo");
        }
        inline app::Uri_UriInfo* create() {
            return il2cpp::create_object<app::Uri_UriInfo>(get_class());
        }
    } // namespace Uri_UriInfo
} // namespace app::classes::types
