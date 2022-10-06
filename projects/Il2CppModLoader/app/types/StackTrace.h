#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackTrace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackTrace__Class** type_info;
        inline app::StackTrace__Class* get_class() {
            return il2cpp::get_class<app::StackTrace__Class>(type_info, "System.Diagnostics", "StackTrace");
        }
        inline app::StackTrace* create() {
            return il2cpp::create_object<app::StackTrace>(get_class());
        }
        inline app::StackTrace__Array* create_array(int size) {
            return il2cpp::array_new<app::StackTrace__Array>(get_class(), size);
        }
        inline app::StackTrace__Array* create_array(const std::vector<app::StackTrace*>& items) {
            return il2cpp::array_new<app::StackTrace__Array>(get_class(), items);
        }
    } // namespace StackTrace
} // namespace app::classes::types
