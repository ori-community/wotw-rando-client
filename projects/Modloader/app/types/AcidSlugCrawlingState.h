#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugCrawlingState {
        inline app::AcidSlugCrawlingState__Class** type_info = (app::AcidSlugCrawlingState__Class**)(modloader::win::memory::resolve_rva(0x0477A500));
        inline app::AcidSlugCrawlingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugCrawlingState__Class>(type_info, "", "AcidSlugCrawlingState");
        }
        inline app::AcidSlugCrawlingState* create() {
            return il2cpp::create_object<app::AcidSlugCrawlingState>(get_class());
        }
    } // namespace AcidSlugCrawlingState
} // namespace app::classes::types
