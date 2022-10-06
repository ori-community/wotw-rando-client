#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISeinReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISeinReceiver__Class** type_info;
        inline app::ISeinReceiver__Class* get_class() {
            return il2cpp::get_class<app::ISeinReceiver__Class>(type_info, "", "ISeinReceiver");
        }
        inline app::ISeinReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::ISeinReceiver__Array>(get_class(), size);
        }
        inline app::ISeinReceiver__Array* create_array(const std::vector<app::ISeinReceiver*>& items) {
            return il2cpp::array_new<app::ISeinReceiver__Array>(get_class(), items);
        }
    } // namespace ISeinReceiver
} // namespace app::classes::types
