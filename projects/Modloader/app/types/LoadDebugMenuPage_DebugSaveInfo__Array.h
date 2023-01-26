#pragma once
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Array.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_DebugSaveInfo__Array {
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array__Class** type_info() {
            static app::LoadDebugMenuPage_DebugSaveInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadDebugMenuPage_DebugSaveInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LoadDebugMenuPage_DebugSaveInfo__Array__Class>(type_info(), "", "LoadDebugMenuPage+DebugSaveInfo[]");
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class());
        }
    } // namespace LoadDebugMenuPage_DebugSaveInfo__Array
} // namespace app::classes::types
