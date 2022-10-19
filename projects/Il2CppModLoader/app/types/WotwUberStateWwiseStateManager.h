#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WotwUberStateWwiseStateManager {
        namespace {
            inline app::WotwUberStateWwiseStateManager__Class* type_info_ref = nullptr;
        }
        inline app::WotwUberStateWwiseStateManager__Class** type_info = &type_info_ref;
        inline app::WotwUberStateWwiseStateManager__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateWwiseStateManager__Class>(type_info, "", "WotwUberStateWwiseStateManager");
        }
        inline app::WotwUberStateWwiseStateManager* create() {
            return il2cpp::create_object<app::WotwUberStateWwiseStateManager>(get_class());
        }
    } // namespace WotwUberStateWwiseStateManager
} // namespace app::classes::types
