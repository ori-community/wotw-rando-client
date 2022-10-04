#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITestNotifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITestNotifier__Class** type_info;
        inline app::ITestNotifier__Class* get_class() {
            return il2cpp::get_class<app::ITestNotifier__Class>(type_info, "", "ITestNotifier");
        }
        inline app::ITestNotifier* create() {
            return il2cpp::create_object<app::ITestNotifier>(get_class());
        }
    } // namespace ITestNotifier
} // namespace app::classes::types
