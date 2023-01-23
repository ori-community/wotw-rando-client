#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LevelLoadingPriority__Class.h>
#include <Modloader/app/structs/LevelLoadingPriority.h>

namespace app::classes::types {
    namespace LevelLoadingPriority {
        namespace {
            inline app::LevelLoadingPriority__Class* type_info_ref = nullptr;
        }
        inline app::LevelLoadingPriority__Class** type_info = &type_info_ref;
        inline app::LevelLoadingPriority__Class* get_class() {
            return il2cpp::get_class<app::LevelLoadingPriority__Class>(type_info, "", "LevelLoadingPriority");
        }
        inline app::LevelLoadingPriority* create() {
            return il2cpp::create_object<app::LevelLoadingPriority>(get_class());
        }
    } // namespace LevelLoadingPriority
} // namespace app::classes::types
