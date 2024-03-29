#pragma once
#include <Modloader/app/structs/JsonBuilder_Slot.h>
#include <Modloader/app/structs/JsonBuilder_Slot__Boxed.h>
#include <Modloader/app/structs/JsonBuilder_Slot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder_Slot {
        inline app::JsonBuilder_Slot__Class** type_info() {
            static app::JsonBuilder_Slot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonBuilder_Slot__Class**)(modloader::win::memory::resolve_rva(0x0476E340));
            }
            return cache;
        }
        inline app::JsonBuilder_Slot__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Slot__Class>(type_info(), "Moon", "JsonBuilder", "Slot");
        }
        inline app::JsonBuilder_Slot* create() {
            return il2cpp::create_object<app::JsonBuilder_Slot>(get_class());
        }
        inline app::JsonBuilder_Slot__Boxed* box(app::JsonBuilder_Slot value) {
            return il2cpp::box_value<app::JsonBuilder_Slot__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Slot
} // namespace app::classes::types
