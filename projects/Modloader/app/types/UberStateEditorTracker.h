#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateEditorTracker__Class.h>
#include <Modloader/app/structs/UberStateEditorTracker.h>

namespace app::classes::types {
    namespace UberStateEditorTracker {
        namespace {
            inline app::UberStateEditorTracker__Class* type_info_ref = nullptr;
        }
        inline app::UberStateEditorTracker__Class** type_info = &type_info_ref;
        inline app::UberStateEditorTracker__Class* get_class() {
            return il2cpp::get_class<app::UberStateEditorTracker__Class>(type_info, "", "UberStateEditorTracker");
        }
        inline app::UberStateEditorTracker* create() {
            return il2cpp::create_object<app::UberStateEditorTracker>(get_class());
        }
    } // namespace UberStateEditorTracker
} // namespace app::classes::types
