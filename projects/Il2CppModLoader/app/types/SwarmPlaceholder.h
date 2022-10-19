#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmPlaceholder {
        namespace {
            inline app::SwarmPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SwarmPlaceholder__Class** type_info = &type_info_ref;
        inline app::SwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SwarmPlaceholder__Class>(type_info, "", "SwarmPlaceholder");
        }
        inline app::SwarmPlaceholder* create() {
            return il2cpp::create_object<app::SwarmPlaceholder>(get_class());
        }
    } // namespace SwarmPlaceholder
} // namespace app::classes::types
