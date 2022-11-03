#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInteractionNode {
        inline app::IInteractionNode__Class** type_info = (app::IInteractionNode__Class**)(modloader::win::memory::resolve_rva(0x04714390));
        inline app::IInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNode__Class>(type_info, "Moon.InteractionGraph", "IInteractionNode");
        }
        inline app::IInteractionNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionNode__Array>(get_class(), size);
        }
        inline app::IInteractionNode__Array* create_array(const std::vector<app::IInteractionNode*>& items) {
            return il2cpp::array_new<app::IInteractionNode__Array>(get_class(), items);
        }
    } // namespace IInteractionNode
} // namespace app::classes::types
