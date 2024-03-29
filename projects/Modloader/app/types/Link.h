#pragma once
#include <Modloader/app/structs/Link.h>
#include <Modloader/app/structs/Link__Array.h>
#include <Modloader/app/structs/Link__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Link {
        inline app::Link__Class** type_info() {
            static app::Link__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Link__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Link__Class* get_class() {
            return il2cpp::get_class<app::Link__Class>(type_info(), "", "Link");
        }
        inline app::Link* create() {
            return il2cpp::create_object<app::Link>(get_class());
        }
        inline app::Link__Array* create_array(int size) {
            return il2cpp::array_new<app::Link__Array>(get_class(), size);
        }
        inline app::Link__Array* create_array(const std::vector<app::Link*>& items) {
            return il2cpp::array_new<app::Link__Array>(get_class(), items);
        }
    } // namespace Link
} // namespace app::classes::types
