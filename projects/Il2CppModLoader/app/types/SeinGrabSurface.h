#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabSurface {
        namespace {
            app::SeinGrabSurface__Class* type_info_ref = nullptr;
        }
        app::SeinGrabSurface__Class** type_info = &type_info_ref;
        inline app::SeinGrabSurface__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabSurface__Class>(type_info, "", "SeinGrabSurface");
        }
        inline app::SeinGrabSurface* create() {
            return il2cpp::create_object<app::SeinGrabSurface>(get_class());
        }
    } // namespace SeinGrabSurface
} // namespace app::classes::types
