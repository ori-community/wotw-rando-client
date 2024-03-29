#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_Link.h>
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Link__Boxed.h>
#include <Modloader/app/structs/VerletBodyIndexed_Link__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Link {
        inline app::VerletBodyIndexed_Link__Class** type_info() {
            static app::VerletBodyIndexed_Link__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBodyIndexed_Link__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBodyIndexed_Link__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_Link__Class>(type_info(), "Moon", "VerletBodyIndexed", "Link");
        }
        inline app::VerletBodyIndexed_Link* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Link>(get_class());
        }
        inline app::VerletBodyIndexed_Link__Boxed* box(app::VerletBodyIndexed_Link value) {
            return il2cpp::box_value<app::VerletBodyIndexed_Link__Boxed>(get_class(), value);
        }
        inline app::VerletBodyIndexed_Link__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBodyIndexed_Link__Array>(get_class(), size);
        }
        inline app::VerletBodyIndexed_Link__Array* create_array(const std::vector<app::VerletBodyIndexed_Link>& items) {
            return il2cpp::array_new<app::VerletBodyIndexed_Link__Array>(get_class(), items);
        }
    } // namespace VerletBodyIndexed_Link
} // namespace app::classes::types
