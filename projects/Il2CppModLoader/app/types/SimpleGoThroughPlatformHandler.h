#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleGoThroughPlatformHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleGoThroughPlatformHandler__Class** type_info;
        inline app::SimpleGoThroughPlatformHandler__Class* get_class() {
            return il2cpp::get_class<app::SimpleGoThroughPlatformHandler__Class>(type_info, "", "SimpleGoThroughPlatformHandler");
        }
        inline app::SimpleGoThroughPlatformHandler* create() {
            return il2cpp::create_object<app::SimpleGoThroughPlatformHandler>(get_class());
        }
    } // namespace SimpleGoThroughPlatformHandler
} // namespace app::classes::types
