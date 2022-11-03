#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace String__Array {
        inline app::String__Array__Class** type_info = (app::String__Array__Class**)(modloader::win::memory::resolve_rva(0x0476D5A0));
        inline app::String__Array__Class* get_class() {
            return il2cpp::get_class<app::String__Array__Class>(type_info, "System", "String[]");
        }
        inline app::String__Array* create() {
            return il2cpp::create_object<app::String__Array>(get_class());
        }
        inline app::String__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::String__Array__Array>(get_class(), size);
        }
        inline app::String__Array__Array* create_array(const std::vector<app::String__Array*>& items) {
            return il2cpp::array_new<app::String__Array__Array>(get_class(), items);
        }
    } // namespace String__Array
} // namespace app::classes::types
