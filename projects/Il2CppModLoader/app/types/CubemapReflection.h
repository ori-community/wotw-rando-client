#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CubemapReflection {
        namespace {
            app::CubemapReflection__Class* type_info_ref = nullptr;
        }
        app::CubemapReflection__Class** type_info = &type_info_ref;
        inline app::CubemapReflection__Class* get_class() {
            return il2cpp::get_class<app::CubemapReflection__Class>(type_info, "", "CubemapReflection");
        }
        inline app::CubemapReflection* create() {
            return il2cpp::create_object<app::CubemapReflection>(get_class());
        }
    } // namespace CubemapReflection
} // namespace app::classes::types
