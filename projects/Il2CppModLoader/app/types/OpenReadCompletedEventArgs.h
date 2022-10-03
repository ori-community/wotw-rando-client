#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenReadCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenReadCompletedEventArgs__Class** type_info;
        inline app::OpenReadCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::OpenReadCompletedEventArgs__Class>(type_info, "System.Net", "OpenReadCompletedEventArgs");
        }
        inline app::OpenReadCompletedEventArgs* create() {
            return il2cpp::create_object<app::OpenReadCompletedEventArgs>(get_class());
        }
    } // namespace OpenReadCompletedEventArgs
} // namespace app::classes::types
