#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtectiveLightRadial {
        inline app::ProtectiveLightRadial__Class** type_info = (app::ProtectiveLightRadial__Class**)(modloader::win::memory::resolve_rva(0x047466B0));
        inline app::ProtectiveLightRadial__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightRadial__Class>(type_info, "", "ProtectiveLightRadial");
        }
        inline app::ProtectiveLightRadial* create() {
            return il2cpp::create_object<app::ProtectiveLightRadial>(get_class());
        }
        inline app::ProtectiveLightRadial__Array* create_array(int size) {
            return il2cpp::array_new<app::ProtectiveLightRadial__Array>(get_class(), size);
        }
        inline app::ProtectiveLightRadial__Array* create_array(const std::vector<app::ProtectiveLightRadial*>& items) {
            return il2cpp::array_new<app::ProtectiveLightRadial__Array>(get_class(), items);
        }
    } // namespace ProtectiveLightRadial
} // namespace app::classes::types
