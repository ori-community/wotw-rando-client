#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexField {
        inline app::IndexField__Class** type_info = (app::IndexField__Class**)(modloader::win::memory::resolve_rva(0x047253B8));
        inline app::IndexField__Class* get_class() {
            return il2cpp::get_class<app::IndexField__Class>(type_info, "System.Data", "IndexField");
        }
        inline app::IndexField* create() {
            return il2cpp::create_object<app::IndexField>(get_class());
        }
        inline app::IndexField__Boxed* box(app::IndexField value) {
            return il2cpp::box_value<app::IndexField__Boxed>(get_class(), value);
        }
        inline app::IndexField__Array* create_array(int size) {
            return il2cpp::array_new<app::IndexField__Array>(get_class(), size);
        }
        inline app::IndexField__Array* create_array(const std::vector<app::IndexField>& items) {
            return il2cpp::array_new<app::IndexField__Array>(get_class(), items);
        }
    } // namespace IndexField
} // namespace app::classes::types
