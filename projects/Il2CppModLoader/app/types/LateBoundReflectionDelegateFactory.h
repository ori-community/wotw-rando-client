#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LateBoundReflectionDelegateFactory {
        inline app::LateBoundReflectionDelegateFactory__Class** type_info = (app::LateBoundReflectionDelegateFactory__Class**)(modloader::win::memory::resolve_rva(0x04741718));
        inline app::LateBoundReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::LateBoundReflectionDelegateFactory__Class>(type_info, "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory");
        }
        inline app::LateBoundReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::LateBoundReflectionDelegateFactory>(get_class());
        }
    } // namespace LateBoundReflectionDelegateFactory
} // namespace app::classes::types
