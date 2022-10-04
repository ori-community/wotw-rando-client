#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class** type_info;
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class>(type_info, "Moon", "NewSetupStateControllerResolver", "IRuntimeUberStateControllerDataLink");
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink>(get_class());
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class(), size);
        }
    } // namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink
} // namespace app::classes::types
