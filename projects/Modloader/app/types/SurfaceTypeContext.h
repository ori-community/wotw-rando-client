#pragma once
#include <Modloader/app/structs/SurfaceTypeContext.h>
#include <Modloader/app/structs/SurfaceTypeContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceTypeContext {
        inline app::SurfaceTypeContext__Class** type_info() {
            static app::SurfaceTypeContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceTypeContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceTypeContext__Class* get_class() {
            return il2cpp::get_class<app::SurfaceTypeContext__Class>(type_info(), "", "SurfaceTypeContext");
        }
        inline app::SurfaceTypeContext* create() {
            return il2cpp::create_object<app::SurfaceTypeContext>(get_class());
        }
    } // namespace SurfaceTypeContext
} // namespace app::classes::types
