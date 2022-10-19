#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity {
        inline app::SandWormEntity__Class** type_info = (app::SandWormEntity__Class**)(modloader::win::memory::resolve_rva(0x0478BAA0));
        inline app::SandWormEntity__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity__Class>(type_info, "", "SandWormEntity");
        }
        inline app::SandWormEntity* create() {
            return il2cpp::create_object<app::SandWormEntity>(get_class());
        }
        inline app::SandWormEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormEntity__Array>(get_class(), size);
        }
        inline app::SandWormEntity__Array* create_array(const std::vector<app::SandWormEntity*>& items) {
            return il2cpp::array_new<app::SandWormEntity__Array>(get_class(), items);
        }
    } // namespace SandWormEntity
} // namespace app::classes::types
