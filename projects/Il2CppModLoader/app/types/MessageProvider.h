#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageProvider__Class** type_info;
        inline app::MessageProvider__Class* get_class() {
            return il2cpp::get_class<app::MessageProvider__Class>(type_info, "", "MessageProvider");
        }
        inline app::MessageProvider* create() {
            return il2cpp::create_object<app::MessageProvider>(get_class());
        }
        inline app::MessageProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageProvider__Array>(get_class(), size);
        }
    } // namespace MessageProvider
} // namespace app::classes::types
