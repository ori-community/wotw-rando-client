#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatSetting {
        inline app::StatSetting__Class** type_info = (app::StatSetting__Class**)(modloader::win::memory::resolve_rva(0x047186D8));
        inline app::StatSetting__Class* get_class() {
            return il2cpp::get_class<app::StatSetting__Class>(type_info, "", "StatSetting");
        }
        inline app::StatSetting* create() {
            return il2cpp::create_object<app::StatSetting>(get_class());
        }
        inline app::StatSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSetting__Array>(get_class(), size);
        }
        inline app::StatSetting__Array* create_array(const std::vector<app::StatSetting*>& items) {
            return il2cpp::array_new<app::StatSetting__Array>(get_class(), items);
        }
    } // namespace StatSetting
} // namespace app::classes::types
