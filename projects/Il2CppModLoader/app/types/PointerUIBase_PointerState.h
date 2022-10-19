#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerUIBase_PointerState {
        inline app::PointerUIBase_PointerState__Class** type_info = (app::PointerUIBase_PointerState__Class**)(modloader::win::memory::resolve_rva(0x04733928));
        inline app::PointerUIBase_PointerState__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerUIBase_PointerState__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIBase", "PointerState");
        }
        inline app::PointerUIBase_PointerState* create() {
            return il2cpp::create_object<app::PointerUIBase_PointerState>(get_class());
        }
        inline app::PointerUIBase_PointerState__Boxed* box(app::PointerUIBase_PointerState value) {
            return il2cpp::box_value<app::PointerUIBase_PointerState__Boxed>(get_class(), value);
        }
        inline app::PointerUIBase_PointerState__Array* create_array(int size) {
            return il2cpp::array_new<app::PointerUIBase_PointerState__Array>(get_class(), size);
        }
        inline app::PointerUIBase_PointerState__Array* create_array(const std::vector<app::PointerUIBase_PointerState>& items) {
            return il2cpp::array_new<app::PointerUIBase_PointerState__Array>(get_class(), items);
        }
    } // namespace PointerUIBase_PointerState
} // namespace app::classes::types
