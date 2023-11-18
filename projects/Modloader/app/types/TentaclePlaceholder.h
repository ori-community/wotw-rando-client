#pragma once
#include <Modloader/app/structs/TentaclePlaceholder.h>
#include <Modloader/app/structs/TentaclePlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentaclePlaceholder {
        inline app::TentaclePlaceholder__Class** type_info() {
            static app::TentaclePlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentaclePlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentaclePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TentaclePlaceholder__Class>(type_info(), "", "TentaclePlaceholder");
        }
        inline app::TentaclePlaceholder* create() {
            return il2cpp::create_object<app::TentaclePlaceholder>(get_class());
        }
    } // namespace TentaclePlaceholder
} // namespace app::classes::types
