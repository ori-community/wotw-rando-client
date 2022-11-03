#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTextMeshRenderer_1 {
        inline app::MoonTextMeshRenderer_1__Class** type_info = (app::MoonTextMeshRenderer_1__Class**)(modloader::win::memory::resolve_rva(0x04740F70));
        inline app::MoonTextMeshRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::MoonTextMeshRenderer_1__Class>(type_info, "Moon.UI", "MoonTextMeshRenderer");
        }
        inline app::MoonTextMeshRenderer_1* create() {
            return il2cpp::create_object<app::MoonTextMeshRenderer_1>(get_class());
        }
    } // namespace MoonTextMeshRenderer_1
} // namespace app::classes::types
