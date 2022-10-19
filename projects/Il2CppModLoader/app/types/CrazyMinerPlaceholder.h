#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrazyMinerPlaceholder {
        namespace {
            inline app::CrazyMinerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::CrazyMinerPlaceholder__Class** type_info = &type_info_ref;
        inline app::CrazyMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrazyMinerPlaceholder__Class>(type_info, "", "CrazyMinerPlaceholder");
        }
        inline app::CrazyMinerPlaceholder* create() {
            return il2cpp::create_object<app::CrazyMinerPlaceholder>(get_class());
        }
    } // namespace CrazyMinerPlaceholder
} // namespace app::classes::types
