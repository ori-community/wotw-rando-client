#pragma once
#include <Modloader/app/structs/CubemapReflection.h>
#include <Modloader/app/structs/CubemapReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CubemapReflection {
        inline app::CubemapReflection__Class** type_info() {
            static app::CubemapReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CubemapReflection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CubemapReflection__Class* get_class() {
            return il2cpp::get_class<app::CubemapReflection__Class>(type_info(), "", "CubemapReflection");
        }
        inline app::CubemapReflection* create() {
            return il2cpp::create_object<app::CubemapReflection>(get_class());
        }
    } // namespace CubemapReflection
} // namespace app::classes::types
