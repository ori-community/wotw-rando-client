#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int64 {
        inline app::Int64__Class** type_info = (app::Int64__Class**)(modloader::win::memory::resolve_rva(0x04757D40));
        inline app::Int64__Class* get_class() {
            return il2cpp::get_class<app::Int64__Class>(type_info, "System", "Int64");
        }
        inline app::Int64* create() {
            return il2cpp::create_object<app::Int64>(get_class());
        }
        inline app::Int64__Boxed* box(int64_t value) {
            return il2cpp::box_value<app::Int64__Boxed>(get_class(), value);
        }
        inline app::Int64__Array* create_array(int size) {
            return il2cpp::array_new<app::Int64__Array>(get_class(), size);
        }
        inline app::Int64__Array* create_array(const std::vector<int64_t>& items) {
            return il2cpp::array_new<app::Int64__Array>(get_class(), items);
        }
    } // namespace Int64
} // namespace app::classes::types
