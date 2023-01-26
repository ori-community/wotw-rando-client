#pragma once
#include <Modloader/app/structs/SeinGrabSurface.h>
#include <Modloader/app/structs/SeinGrabSurface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabSurface {
        inline app::SeinGrabSurface__Class** type_info() {
            static app::SeinGrabSurface__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabSurface__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabSurface__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabSurface__Class>(type_info(), "", "SeinGrabSurface");
        }
        inline app::SeinGrabSurface* create() {
            return il2cpp::create_object<app::SeinGrabSurface>(get_class());
        }
    } // namespace SeinGrabSurface
} // namespace app::classes::types
