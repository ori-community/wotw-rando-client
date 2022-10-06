#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_DebugSaveInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadDebugMenuPage_DebugSaveInfo__Class** type_info;
        inline app::LoadDebugMenuPage_DebugSaveInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_DebugSaveInfo__Class>(type_info, "", "LoadDebugMenuPage", "DebugSaveInfo");
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_DebugSaveInfo>(get_class());
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Boxed* box(app::LoadDebugMenuPage_DebugSaveInfo value) {
            return il2cpp::box_value<app::LoadDebugMenuPage_DebugSaveInfo__Boxed>(get_class(), value);
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class(), size);
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create_array(const std::vector<app::LoadDebugMenuPage_DebugSaveInfo__Boxed>& items) {
            return il2cpp::array_new<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class(), items);
        }
    } // namespace LoadDebugMenuPage_DebugSaveInfo
} // namespace app::classes::types
