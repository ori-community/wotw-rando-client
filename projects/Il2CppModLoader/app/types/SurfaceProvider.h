#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceProvider {
        namespace {
            inline app::SurfaceProvider__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceProvider__Class** type_info = &type_info_ref;
        inline app::SurfaceProvider__Class* get_class() {
            return il2cpp::get_class<app::SurfaceProvider__Class>(type_info, "", "SurfaceProvider");
        }
        inline app::SurfaceProvider* create() {
            return il2cpp::create_object<app::SurfaceProvider>(get_class());
        }
    } // namespace SurfaceProvider
} // namespace app::classes::types
