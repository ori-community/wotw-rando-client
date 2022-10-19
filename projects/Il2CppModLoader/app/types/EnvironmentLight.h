#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvironmentLight {
        inline app::EnvironmentLight__Class** type_info = (app::EnvironmentLight__Class**)(modloader::win::memory::resolve_rva(0x0476B7D0));
        inline app::EnvironmentLight__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLight__Class>(type_info, "", "EnvironmentLight");
        }
        inline app::EnvironmentLight* create() {
            return il2cpp::create_object<app::EnvironmentLight>(get_class());
        }
        inline app::EnvironmentLight__Array* create_array(int size) {
            return il2cpp::array_new<app::EnvironmentLight__Array>(get_class(), size);
        }
        inline app::EnvironmentLight__Array* create_array(const std::vector<app::EnvironmentLight*>& items) {
            return il2cpp::array_new<app::EnvironmentLight__Array>(get_class(), items);
        }
    } // namespace EnvironmentLight
} // namespace app::classes::types
