#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDebugMessage {
        inline app::MoonDebugMessage__Class** type_info = (app::MoonDebugMessage__Class**)(modloader::win::memory::resolve_rva(0x047457C0));
        inline app::MoonDebugMessage__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessage__Class>(type_info, "Moon", "MoonDebugMessage");
        }
        inline app::MoonDebugMessage* create() {
            return il2cpp::create_object<app::MoonDebugMessage>(get_class());
        }
        inline app::MoonDebugMessage__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonDebugMessage__Array>(get_class(), size);
        }
        inline app::MoonDebugMessage__Array* create_array(const std::vector<app::MoonDebugMessage*>& items) {
            return il2cpp::array_new<app::MoonDebugMessage__Array>(get_class(), items);
        }
    } // namespace MoonDebugMessage
} // namespace app::classes::types
