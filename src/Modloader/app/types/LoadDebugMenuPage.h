#pragma once
#include <Modloader/app/structs/LoadDebugMenuPage.h>
#include <Modloader/app/structs/LoadDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage {
        inline app::LoadDebugMenuPage__Class** type_info() {
            static app::LoadDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x04774B70));
            }
            return cache;
        }
        inline app::LoadDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::LoadDebugMenuPage__Class>(type_info(), "", "LoadDebugMenuPage");
        }
        inline app::LoadDebugMenuPage* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage>(get_class());
        }
    } // namespace LoadDebugMenuPage
} // namespace app::classes::types
