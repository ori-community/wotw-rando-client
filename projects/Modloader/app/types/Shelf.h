#pragma once
#include <Modloader/app/structs/Shelf.h>
#include <Modloader/app/structs/Shelf__Array.h>
#include <Modloader/app/structs/Shelf__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shelf {
        inline app::Shelf__Class** type_info() {
            static app::Shelf__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shelf__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shelf__Class* get_class() {
            return il2cpp::get_class<app::Shelf__Class>(type_info(), "", "Shelf");
        }
        inline app::Shelf* create() {
            return il2cpp::create_object<app::Shelf>(get_class());
        }
        inline app::Shelf__Array* create_array(int size) {
            return il2cpp::array_new<app::Shelf__Array>(get_class(), size);
        }
        inline app::Shelf__Array* create_array(const std::vector<app::Shelf*>& items) {
            return il2cpp::array_new<app::Shelf__Array>(get_class(), items);
        }
    } // namespace Shelf
} // namespace app::classes::types
