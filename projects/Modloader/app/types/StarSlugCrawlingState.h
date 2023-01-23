#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StarSlugCrawlingState__Class.h>
#include <Modloader/app/structs/StarSlugCrawlingState.h>

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
