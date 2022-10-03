#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceTypeContext {
        namespace {
            app::SurfaceTypeContext__Class* type_info_ref = nullptr;
        }
        app::SurfaceTypeContext__Class** type_info = &type_info_ref;
        inline app::SurfaceTypeContext__Class* get_class() {
            return il2cpp::get_class<app::SurfaceTypeContext__Class>(type_info, "", "SurfaceTypeContext");
        }
        inline app::SurfaceTypeContext* create() {
            return il2cpp::create_object<app::SurfaceTypeContext>(get_class());
        }
    } // namespace SurfaceTypeContext
} // namespace app::classes::types
