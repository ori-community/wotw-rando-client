#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableGameObjectWhenOutOfFrustrum {
        inline app::DisableGameObjectWhenOutOfFrustrum__Class** type_info = (app::DisableGameObjectWhenOutOfFrustrum__Class**)(modloader::win::memory::resolve_rva(0x047427D8));
        inline app::DisableGameObjectWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::DisableGameObjectWhenOutOfFrustrum__Class>(type_info, "", "DisableGameObjectWhenOutOfFrustrum");
        }
        inline app::DisableGameObjectWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::DisableGameObjectWhenOutOfFrustrum>(get_class());
        }
    } // namespace DisableGameObjectWhenOutOfFrustrum
} // namespace app::classes::types
