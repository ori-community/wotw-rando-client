#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonBuilder_Slot {
        inline app::JsonBuilder_Slot__Class** type_info = (app::JsonBuilder_Slot__Class**)(modloader::win::memory::resolve_rva(0x0476E340));
        inline app::JsonBuilder_Slot__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Slot__Class>(type_info, "Moon", "JsonBuilder", "Slot");
        }
        inline app::JsonBuilder_Slot* create() {
            return il2cpp::create_object<app::JsonBuilder_Slot>(get_class());
        }
        inline app::JsonBuilder_Slot__Boxed* box(app::JsonBuilder_Slot value) {
            return il2cpp::box_value<app::JsonBuilder_Slot__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Slot
} // namespace app::classes::types
