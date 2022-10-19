#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLanternPlaceholder {
        namespace {
            inline app::SpiritLanternPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLanternPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiritLanternPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiritLanternPlaceholder__Class>(type_info, "", "SpiritLanternPlaceholder");
        }
        inline app::SpiritLanternPlaceholder* create() {
            return il2cpp::create_object<app::SpiritLanternPlaceholder>(get_class());
        }
    } // namespace SpiritLanternPlaceholder
} // namespace app::classes::types
