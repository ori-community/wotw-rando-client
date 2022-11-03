#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartPlaceholder {
        namespace {
            inline app::CartPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::CartPlaceholder__Class** type_info = &type_info_ref;
        inline app::CartPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CartPlaceholder__Class>(type_info, "", "CartPlaceholder");
        }
        inline app::CartPlaceholder* create() {
            return il2cpp::create_object<app::CartPlaceholder>(get_class());
        }
        inline app::CartPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::CartPlaceholder__Array>(get_class(), size);
        }
        inline app::CartPlaceholder__Array* create_array(const std::vector<app::CartPlaceholder*>& items) {
            return il2cpp::array_new<app::CartPlaceholder__Array>(get_class(), items);
        }
    } // namespace CartPlaceholder
} // namespace app::classes::types
