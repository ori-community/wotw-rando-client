#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugCrawlingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcidSlugCrawlingState__Class** type_info;
        inline app::AcidSlugCrawlingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugCrawlingState__Class>(type_info, "", "AcidSlugCrawlingState");
        }
        inline app::AcidSlugCrawlingState* create() {
            return il2cpp::create_object<app::AcidSlugCrawlingState>(get_class());
        }
    } // namespace AcidSlugCrawlingState
} // namespace app::classes::types
