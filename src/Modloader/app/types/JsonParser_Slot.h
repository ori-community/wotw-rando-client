#pragma once
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/JsonParser_Slot__Boxed.h>
#include <Modloader/app/structs/JsonParser_Slot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonParser_Slot {
        inline app::JsonParser_Slot__Class** type_info() {
            static app::JsonParser_Slot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonParser_Slot__Class**)(modloader::win::memory::resolve_rva(0x0477D798));
            }
            return cache;
        }
        inline app::JsonParser_Slot__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonParser_Slot__Class>(type_info(), "Moon", "JsonParser", "Slot");
        }
        inline app::JsonParser_Slot* create() {
            return il2cpp::create_object<app::JsonParser_Slot>(get_class());
        }
        inline app::JsonParser_Slot__Boxed* box(app::JsonParser_Slot value) {
            return il2cpp::box_value<app::JsonParser_Slot__Boxed>(get_class(), value);
        }
    } // namespace JsonParser_Slot
} // namespace app::classes::types
