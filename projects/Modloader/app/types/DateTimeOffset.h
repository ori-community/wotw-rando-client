#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeOffset {
        inline app::DateTimeOffset__Class** type_info = (app::DateTimeOffset__Class**)(modloader::win::memory::resolve_rva(0x0473F960));
        inline app::DateTimeOffset__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffset__Class>(type_info, "System", "DateTimeOffset");
        }
        inline app::DateTimeOffset* create() {
            return il2cpp::create_object<app::DateTimeOffset>(get_class());
        }
        inline app::DateTimeOffset__Boxed* box(app::DateTimeOffset value) {
            return il2cpp::box_value<app::DateTimeOffset__Boxed>(get_class(), value);
        }
        inline app::DateTimeOffset__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTimeOffset__Array>(get_class(), size);
        }
        inline app::DateTimeOffset__Array* create_array(const std::vector<app::DateTimeOffset>& items) {
            return il2cpp::array_new<app::DateTimeOffset__Array>(get_class(), items);
        }
    } // namespace DateTimeOffset
} // namespace app::classes::types
