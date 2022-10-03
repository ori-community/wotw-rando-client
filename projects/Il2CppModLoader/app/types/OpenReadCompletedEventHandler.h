#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenReadCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenReadCompletedEventHandler__Class** type_info;
        inline app::OpenReadCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::OpenReadCompletedEventHandler__Class>(type_info, "System.Net", "OpenReadCompletedEventHandler");
        }
        inline app::OpenReadCompletedEventHandler* create() {
            return il2cpp::create_object<app::OpenReadCompletedEventHandler>(get_class());
        }
    } // namespace OpenReadCompletedEventHandler
} // namespace app::classes::types
