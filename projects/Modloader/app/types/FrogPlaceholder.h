#pragma once
#include <Modloader/app/structs/FrogPlaceholder.h>
#include <Modloader/app/structs/FrogPlaceholder__Array.h>
#include <Modloader/app/structs/FrogPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogPlaceholder {
        inline app::FrogPlaceholder__Class** type_info() {
            static app::FrogPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FrogPlaceholder__Class>(type_info(), "", "FrogPlaceholder");
        }
        inline app::FrogPlaceholder* create() {
            return il2cpp::create_object<app::FrogPlaceholder>(get_class());
        }
        inline app::FrogPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::FrogPlaceholder__Array>(get_class(), size);
        }
        inline app::FrogPlaceholder__Array* create_array(const std::vector<app::FrogPlaceholder*>& items) {
            return il2cpp::array_new<app::FrogPlaceholder__Array>(get_class(), items);
        }
    } // namespace FrogPlaceholder
} // namespace app::classes::types
