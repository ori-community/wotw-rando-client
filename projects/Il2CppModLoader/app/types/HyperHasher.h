#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HyperHasher {
        inline app::HyperHasher__Class** type_info = (app::HyperHasher__Class**)(modloader::win::memory::resolve_rva(0x047184F0));
        inline app::HyperHasher__Class* get_class() {
            return il2cpp::get_class<app::HyperHasher__Class>(type_info, "", "HyperHasher");
        }
        inline app::HyperHasher* create() {
            return il2cpp::create_object<app::HyperHasher>(get_class());
        }
    } // namespace HyperHasher
} // namespace app::classes::types
