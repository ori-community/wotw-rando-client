#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CubemapReflection__Class.h>
#include <Modloader/app/structs/CubemapReflection.h>

namespace app::classes::types {
    namespace CubemapReflection {
        namespace {
            inline app::CubemapReflection__Class* type_info_ref = nullptr;
        }
        inline app::CubemapReflection__Class** type_info = &type_info_ref;
        inline app::CubemapReflection__Class* get_class() {
            return il2cpp::get_class<app::CubemapReflection__Class>(type_info, "", "CubemapReflection");
        }
        inline app::CubemapReflection* create() {
            return il2cpp::create_object<app::CubemapReflection>(get_class());
        }
    } // namespace CubemapReflection
} // namespace app::classes::types
