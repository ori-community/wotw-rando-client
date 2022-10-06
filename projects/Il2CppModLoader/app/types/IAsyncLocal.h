#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAsyncLocal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAsyncLocal__Class** type_info;
        inline app::IAsyncLocal__Class* get_class() {
            return il2cpp::get_class<app::IAsyncLocal__Class>(type_info, "System.Threading", "IAsyncLocal");
        }
        inline app::IAsyncLocal__Array* create_array(int size) {
            return il2cpp::array_new<app::IAsyncLocal__Array>(get_class(), size);
        }
        inline app::IAsyncLocal__Array* create_array(const std::vector<app::IAsyncLocal*>& items) {
            return il2cpp::array_new<app::IAsyncLocal__Array>(get_class(), items);
        }
    } // namespace IAsyncLocal
} // namespace app::classes::types
