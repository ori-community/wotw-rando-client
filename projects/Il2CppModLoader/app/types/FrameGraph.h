#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameGraph {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameGraph__Class** type_info;
        inline app::FrameGraph__Class* get_class() {
            return il2cpp::get_class<app::FrameGraph__Class>(type_info, "", "FrameGraph");
        }
        inline app::FrameGraph* create() {
            return il2cpp::create_object<app::FrameGraph>(get_class());
        }
    } // namespace FrameGraph
} // namespace app::classes::types
