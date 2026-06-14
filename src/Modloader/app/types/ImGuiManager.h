#pragma once
#include <Modloader/app/structs/ImGuiManager.h>
#include <Modloader/app/structs/ImGuiManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImGuiManager {
        inline app::ImGuiManager__Class** type_info() {
            static app::ImGuiManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ImGuiManager__Class**)(modloader::win::memory::resolve_rva(0x047914D0));
            }
            return cache;
        }
        inline app::ImGuiManager__Class* get_class() {
            return il2cpp::get_class<app::ImGuiManager__Class>(type_info(), "Moon", "ImGuiManager");
        }
        inline app::ImGuiManager* create() {
            return il2cpp::create_object<app::ImGuiManager>(get_class());
        }
    } // namespace ImGuiManager
} // namespace app::classes::types
