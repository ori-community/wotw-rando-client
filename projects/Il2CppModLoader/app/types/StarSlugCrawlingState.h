#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugCrawlingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StarSlugCrawlingState__Class** type_info;
        inline app::StarSlugCrawlingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugCrawlingState__Class>(type_info, "", "StarSlugCrawlingState");
        }
        inline app::StarSlugCrawlingState* create() {
            return il2cpp::create_object<app::StarSlugCrawlingState>(get_class());
        }
    } // namespace StarSlugCrawlingState
} // namespace app::classes::types
