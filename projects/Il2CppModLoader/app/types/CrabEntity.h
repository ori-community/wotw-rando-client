#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabEntity {
        inline app::CrabEntity__Class** type_info = (app::CrabEntity__Class**)(modloader::win::memory::resolve_rva(0x04761CB0));
        inline app::CrabEntity__Class* get_class() {
            return il2cpp::get_class<app::CrabEntity__Class>(type_info, "", "CrabEntity");
        }
        inline app::CrabEntity* create() {
            return il2cpp::create_object<app::CrabEntity>(get_class());
        }
        inline app::CrabEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::CrabEntity__Array>(get_class(), size);
        }
        inline app::CrabEntity__Array* create_array(const std::vector<app::CrabEntity*>& items) {
            return il2cpp::array_new<app::CrabEntity__Array>(get_class(), items);
        }
    } // namespace CrabEntity
} // namespace app::classes::types
