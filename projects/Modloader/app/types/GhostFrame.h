#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostFrame {
        inline app::GhostFrame__Class** type_info = (app::GhostFrame__Class**)(modloader::win::memory::resolve_rva(0x047987A0));
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
