#pragma once
#include <Modloader/app/structs/MoonTextMeshRenderer.h>
#include <Modloader/app/structs/MoonTextMeshRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTextMeshRenderer {
        inline app::MoonTextMeshRenderer__Class** type_info() {
            static app::MoonTextMeshRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTextMeshRenderer__Class**)(modloader::win::memory::resolve_rva(0x047596C0));
            }
            return cache;
        }
        inline app::MoonTextMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::MoonTextMeshRenderer__Class>(type_info(), "CatlikeCoding.TextBox", "MoonTextMeshRenderer");
        }
        inline app::MoonTextMeshRenderer* create() {
            return il2cpp::create_object<app::MoonTextMeshRenderer>(get_class());
        }
    } // namespace MoonTextMeshRenderer
} // namespace app::classes::types
