#pragma once
#include <Modloader/app/structs/NewLocation.h>
#include <Modloader/app/structs/NewLocation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewLocation {
        inline app::NewLocation__Class** type_info() {
            static app::NewLocation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewLocation__Class**)(modloader::win::memory::resolve_rva(0x0472FFE8));
            }
            return cache;
        }
        inline app::NewLocation__Class* get_class() {
            return il2cpp::get_class<app::NewLocation__Class>(type_info(), "TriangleNet", "NewLocation");
        }
        inline app::NewLocation* create() {
            return il2cpp::create_object<app::NewLocation>(get_class());
        }
    } // namespace NewLocation
} // namespace app::classes::types
