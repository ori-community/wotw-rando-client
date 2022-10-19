#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightberryPlaceholder {
        namespace {
            inline app::NightberryPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::NightberryPlaceholder__Class** type_info = &type_info_ref;
        inline app::NightberryPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::NightberryPlaceholder__Class>(type_info, "", "NightberryPlaceholder");
        }
        inline app::NightberryPlaceholder* create() {
            return il2cpp::create_object<app::NightberryPlaceholder>(get_class());
        }
    } // namespace NightberryPlaceholder
} // namespace app::classes::types
