#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GardenerPlaceholder {
        namespace {
            inline app::GardenerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::GardenerPlaceholder__Class** type_info = &type_info_ref;
        inline app::GardenerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::GardenerPlaceholder__Class>(type_info, "", "GardenerPlaceholder");
        }
        inline app::GardenerPlaceholder* create() {
            return il2cpp::create_object<app::GardenerPlaceholder>(get_class());
        }
    } // namespace GardenerPlaceholder
} // namespace app::classes::types
