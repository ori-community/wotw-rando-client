#pragma once
#include <Modloader/app/structs/SurfaceProvider.h>
#include <Modloader/app/structs/SurfaceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceProvider {
        inline app::SurfaceProvider__Class** type_info() {
            static app::SurfaceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceProvider__Class* get_class() {
            return il2cpp::get_class<app::SurfaceProvider__Class>(type_info(), "", "SurfaceProvider");
        }
        inline app::SurfaceProvider* create() {
            return il2cpp::create_object<app::SurfaceProvider>(get_class());
        }
    } // namespace SurfaceProvider
} // namespace app::classes::types
