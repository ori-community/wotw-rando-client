#pragma once
#include <Modloader/app/structs/DifficultyModeMessageProvider_GetMessages_d_5.h>
#include <Modloader/app/structs/DifficultyModeMessageProvider_GetMessages_d_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyModeMessageProvider_GetMessages_d_5 {
        inline app::DifficultyModeMessageProvider_GetMessages_d_5__Class** type_info() {
            static app::DifficultyModeMessageProvider_GetMessages_d_5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DifficultyModeMessageProvider_GetMessages_d_5__Class**)(modloader::win::memory::resolve_rva(0x0472BAA0));
            }
            return cache;
        }
        inline app::DifficultyModeMessageProvider_GetMessages_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::DifficultyModeMessageProvider_GetMessages_d_5__Class>(type_info(), "", "DifficultyModeMessageProvider", "<GetMessages>d__5");
        }
        inline app::DifficultyModeMessageProvider_GetMessages_d_5* create() {
            return il2cpp::create_object<app::DifficultyModeMessageProvider_GetMessages_d_5>(get_class());
        }
    } // namespace DifficultyModeMessageProvider_GetMessages_d_5
} // namespace app::classes::types
