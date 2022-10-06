#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPageHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugMenuPageHandler__Class** type_info;
        inline app::IDebugMenuPageHandler__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPageHandler__Class>(type_info, "", "IDebugMenuPageHandler");
        }
        inline app::IDebugMenuPageHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), size);
        }
        inline app::IDebugMenuPageHandler__Array* create_array(const std::vector<app::IDebugMenuPageHandler*>& items) {
            return il2cpp::array_new<app::IDebugMenuPageHandler__Array>(get_class(), items);
        }
    } // namespace IDebugMenuPageHandler
} // namespace app::classes::types
