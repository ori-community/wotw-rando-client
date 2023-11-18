#pragma once
#include <Modloader/app/structs/TrailerShot.h>
#include <Modloader/app/structs/TrailerShot__Array.h>
#include <Modloader/app/structs/TrailerShot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailerShot {
        inline app::TrailerShot__Class** type_info() {
            static app::TrailerShot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrailerShot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrailerShot__Class* get_class() {
            return il2cpp::get_class<app::TrailerShot__Class>(type_info(), "", "TrailerShot");
        }
        inline app::TrailerShot* create() {
            return il2cpp::create_object<app::TrailerShot>(get_class());
        }
        inline app::TrailerShot__Array* create_array(int size) {
            return il2cpp::array_new<app::TrailerShot__Array>(get_class(), size);
        }
        inline app::TrailerShot__Array* create_array(const std::vector<app::TrailerShot*>& items) {
            return il2cpp::array_new<app::TrailerShot__Array>(get_class(), items);
        }
    } // namespace TrailerShot
} // namespace app::classes::types
