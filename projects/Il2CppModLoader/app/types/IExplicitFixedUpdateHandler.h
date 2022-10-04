#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExplicitFixedUpdateHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExplicitFixedUpdateHandler__Class** type_info;
        inline app::IExplicitFixedUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitFixedUpdateHandler__Class>(type_info, "Moon", "IExplicitFixedUpdateHandler");
        }
        inline app::IExplicitFixedUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitFixedUpdateHandler__Array>(get_class(), size);
        }
    } // namespace IExplicitFixedUpdateHandler
} // namespace app::classes::types
