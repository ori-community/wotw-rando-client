#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageAndStackTrace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageAndStackTrace__Class** type_info;
        inline app::MessageAndStackTrace__Class* get_class() {
            return il2cpp::get_class<app::MessageAndStackTrace__Class>(type_info, "Moon.ContinuousIntegration", "MessageAndStackTrace");
        }
        inline app::MessageAndStackTrace* create() {
            return il2cpp::create_object<app::MessageAndStackTrace>(get_class());
        }
        inline app::MessageAndStackTrace__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageAndStackTrace__Array>(get_class(), size);
        }
        inline app::MessageAndStackTrace__Array* create_array(const std::vector<app::MessageAndStackTrace*>& items) {
            return il2cpp::array_new<app::MessageAndStackTrace__Array>(get_class(), items);
        }
    } // namespace MessageAndStackTrace
} // namespace app::classes::types
