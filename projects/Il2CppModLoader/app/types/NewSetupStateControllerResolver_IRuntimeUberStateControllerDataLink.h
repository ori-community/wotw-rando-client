#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class** type_info;
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class>(type_info, "Moon", "NewSetupStateControllerResolver", "IRuntimeUberStateControllerDataLink");
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class(), size);
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create_array(const std::vector<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink*>& items) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class(), items);
        }
    } // namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink
} // namespace app::classes::types
