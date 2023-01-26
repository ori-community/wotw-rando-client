#pragma once
#include <Modloader/app/structs/UI_Hints.h>
#include <Modloader/app/structs/UI_Hints__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UI_Hints {
        inline app::UI_Hints__Class** type_info() {
            static app::UI_Hints__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UI_Hints__Class**)(modloader::win::memory::resolve_rva(0x04736668));
            }
            return cache;
        }
        inline app::UI_Hints__Class* get_class() {
            return il2cpp::get_nested_class<app::UI_Hints__Class>(type_info(), "Game", "UI", "Hints");
        }
        inline app::UI_Hints* create() {
            return il2cpp::create_object<app::UI_Hints>(get_class());
        }
    } // namespace UI_Hints
} // namespace app::classes::types
