#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExplicitLateUpdateHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExplicitLateUpdateHandler__Class** type_info;
        inline app::IExplicitLateUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitLateUpdateHandler__Class>(type_info, "Moon", "IExplicitLateUpdateHandler");
        }
        inline app::IExplicitLateUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitLateUpdateHandler__Array>(get_class(), size);
        }
        inline app::IExplicitLateUpdateHandler__Array* create_array(const std::vector<app::IExplicitLateUpdateHandler*>& items) {
            return il2cpp::array_new<app::IExplicitLateUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IExplicitLateUpdateHandler
} // namespace app::classes::types
