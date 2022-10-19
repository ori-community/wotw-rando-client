#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRectProvider {
        inline app::IRectProvider__Class** type_info = (app::IRectProvider__Class**)(modloader::win::memory::resolve_rva(0x04740648));
        inline app::IRectProvider__Class* get_class() {
            return il2cpp::get_class<app::IRectProvider__Class>(type_info, "Moon", "IRectProvider");
        }
        inline app::IRectProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IRectProvider__Array>(get_class(), size);
        }
        inline app::IRectProvider__Array* create_array(const std::vector<app::IRectProvider*>& items) {
            return il2cpp::array_new<app::IRectProvider__Array>(get_class(), items);
        }
    } // namespace IRectProvider
} // namespace app::classes::types
