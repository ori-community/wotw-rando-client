#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DifficultyModeMessageProvider__Class.h>
#include <Modloader/app/structs/DifficultyModeMessageProvider.h>

namespace app::classes::types {
    namespace DifficultyModeMessageProvider {
        namespace {
            inline app::DifficultyModeMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::DifficultyModeMessageProvider__Class** type_info = &type_info_ref;
        inline app::DifficultyModeMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::DifficultyModeMessageProvider__Class>(type_info, "", "DifficultyModeMessageProvider");
        }
        inline app::DifficultyModeMessageProvider* create() {
            return il2cpp::create_object<app::DifficultyModeMessageProvider>(get_class());
        }
    } // namespace DifficultyModeMessageProvider
} // namespace app::classes::types
