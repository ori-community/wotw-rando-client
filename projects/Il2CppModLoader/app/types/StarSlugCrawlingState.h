#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarSlugCrawlingState {
        inline app::StarSlugCrawlingState__Class** type_info = (app::StarSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x04788608));
        inline app::StarSlugCrawlingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugCrawlingState__Class>(type_info, "", "StarSlugCrawlingState");
        }
        inline app::StarSlugCrawlingState* create() {
            return il2cpp::create_object<app::StarSlugCrawlingState>(get_class());
        }
    } // namespace StarSlugCrawlingState
} // namespace app::classes::types
