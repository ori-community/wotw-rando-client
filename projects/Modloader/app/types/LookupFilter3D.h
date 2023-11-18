#pragma once
#include <Modloader/app/structs/LookupFilter3D.h>
#include <Modloader/app/structs/LookupFilter3D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookupFilter3D {
        inline app::LookupFilter3D__Class** type_info() {
            static app::LookupFilter3D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LookupFilter3D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LookupFilter3D__Class* get_class() {
            return il2cpp::get_class<app::LookupFilter3D__Class>(type_info(), "Colorful", "LookupFilter3D");
        }
        inline app::LookupFilter3D* create() {
            return il2cpp::create_object<app::LookupFilter3D>(get_class());
        }
    } // namespace LookupFilter3D
} // namespace app::classes::types
