#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostFrame__Class** type_info;
        inline app::GhostFrame__Class* get_class() {
            return il2cpp::get_class<app::GhostFrame__Class>(type_info, "", "GhostFrame");
        }
        inline app::GhostFrame* create() {
            return il2cpp::create_object<app::GhostFrame>(get_class());
        }
        inline app::GhostFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostFrame__Array>(get_class(), size);
        }
        inline app::GhostFrame__Array* create_array(const std::vector<app::GhostFrame*>& items) {
            return il2cpp::array_new<app::GhostFrame__Array>(get_class(), items);
        }
    } // namespace GhostFrame
} // namespace app::classes::types
