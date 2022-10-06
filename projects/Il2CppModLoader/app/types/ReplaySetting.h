#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplaySetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplaySetting__Class** type_info;
        inline app::ReplaySetting__Class* get_class() {
            return il2cpp::get_class<app::ReplaySetting__Class>(type_info, "", "ReplaySetting");
        }
        inline app::ReplaySetting* create() {
            return il2cpp::create_object<app::ReplaySetting>(get_class());
        }
        inline app::ReplaySetting__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplaySetting__Array>(get_class(), size);
        }
        inline app::ReplaySetting__Array* create_array(const std::vector<app::ReplaySetting*>& items) {
            return il2cpp::array_new<app::ReplaySetting__Array>(get_class(), items);
        }
    } // namespace ReplaySetting
} // namespace app::classes::types
