#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollectionFilter {
        namespace {
            inline app::CollectionFilter__Class* type_info_ref = nullptr;
        }
        inline app::CollectionFilter__Class** type_info = &type_info_ref;
        inline app::CollectionFilter__Class* get_class() {
            return il2cpp::get_class<app::CollectionFilter__Class>(type_info, "PlayFab.ClientModels", "CollectionFilter");
        }
        inline app::CollectionFilter* create() {
            return il2cpp::create_object<app::CollectionFilter>(get_class());
        }
    } // namespace CollectionFilter
} // namespace app::classes::types
