#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Link {
        namespace {
            inline app::VerletBodyIndexed_Link__Class* type_info_ref = nullptr;
        }
        inline app::VerletBodyIndexed_Link__Class** type_info = &type_info_ref;
        inline app::VerletBodyIndexed_Link__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBodyIndexed_Link__Class>(type_info, "Moon", "VerletBodyIndexed", "Link");
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
