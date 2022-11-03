#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrailerShot {
        namespace {
            inline app::TrailerShot__Class* type_info_ref = nullptr;
        }
        inline app::TrailerShot__Class** type_info = &type_info_ref;
        inline app::TrailerShot__Class* get_class() {
            return il2cpp::get_class<app::TrailerShot__Class>(type_info, "", "TrailerShot");
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
