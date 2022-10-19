#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
