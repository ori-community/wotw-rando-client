#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int64__Array {
        inline app::Int64__Array__Class** type_info = (app::Int64__Array__Class**)(modloader::win::memory::resolve_rva(0x047337F0));
        inline app::Int64__Array__Class* get_class() {
            return il2cpp::get_class<app::Int64__Array__Class>(type_info, "System", "Int64[]");
        }
        inline app::Int64__Array* create() {
            return il2cpp::create_object<app::Int64__Array>(get_class());
        }
        inline app::Int64__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Int64__Array__Array>(get_class(), size);
        }
        inline app::Int64__Array__Array* create_array(const std::vector<app::Int64__Array*>& items) {
            return il2cpp::array_new<app::Int64__Array__Array>(get_class(), items);
        }
    } // namespace Int64__Array
} // namespace app::classes::types
