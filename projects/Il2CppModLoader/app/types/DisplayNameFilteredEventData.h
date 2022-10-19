#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisplayNameFilteredEventData {
        namespace {
            inline app::DisplayNameFilteredEventData__Class* type_info_ref = nullptr;
        }
        inline app::DisplayNameFilteredEventData__Class** type_info = &type_info_ref;
        inline app::DisplayNameFilteredEventData__Class* get_class() {
            return il2cpp::get_class<app::DisplayNameFilteredEventData__Class>(type_info, "PlayFab.PlayStreamModels", "DisplayNameFilteredEventData");
        }
        inline app::DisplayNameFilteredEventData* create() {
            return il2cpp::create_object<app::DisplayNameFilteredEventData>(get_class());
        }
    } // namespace DisplayNameFilteredEventData
} // namespace app::classes::types
