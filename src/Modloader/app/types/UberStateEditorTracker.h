#pragma once
#include <Modloader/app/structs/UberStateEditorTracker.h>
#include <Modloader/app/structs/UberStateEditorTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateEditorTracker {
        inline app::UberStateEditorTracker__Class** type_info() {
            static app::UberStateEditorTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateEditorTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateEditorTracker__Class* get_class() {
            return il2cpp::get_class<app::UberStateEditorTracker__Class>(type_info(), "", "UberStateEditorTracker");
        }
        inline app::UberStateEditorTracker* create() {
            return il2cpp::create_object<app::UberStateEditorTracker>(get_class());
        }
    } // namespace UberStateEditorTracker
} // namespace app::classes::types
