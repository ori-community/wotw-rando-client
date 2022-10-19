#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleGoThroughPlatformHandler {
        inline app::SimpleGoThroughPlatformHandler__Class** type_info = (app::SimpleGoThroughPlatformHandler__Class**)(modloader::win::memory::resolve_rva(0x0474DE88));
        inline app::SimpleGoThroughPlatformHandler__Class* get_class() {
            return il2cpp::get_class<app::SimpleGoThroughPlatformHandler__Class>(type_info, "", "SimpleGoThroughPlatformHandler");
        }
        inline app::SimpleGoThroughPlatformHandler* create() {
            return il2cpp::create_object<app::SimpleGoThroughPlatformHandler>(get_class());
        }
    } // namespace SimpleGoThroughPlatformHandler
} // namespace app::classes::types
