#pragma once
#include <Modloader/app/structs/BoolStateMap_Mapping.h>
#include <Modloader/app/structs/BoolStateMap_Mapping__Array.h>
#include <Modloader/app/structs/BoolStateMap_Mapping__Boxed.h>
#include <Modloader/app/structs/BoolStateMap_Mapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoolStateMap_Mapping {
        inline app::BoolStateMap_Mapping__Class** type_info() {
            static app::BoolStateMap_Mapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BoolStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x04732F58));
            }
            return cache;
        }
        inline app::BoolStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::BoolStateMap_Mapping__Class>(type_info(), "", "BoolStateMap", "Mapping");
        }
        inline app::BoolStateMap_Mapping* create() {
            return il2cpp::create_object<app::BoolStateMap_Mapping>(get_class());
        }
        inline app::BoolStateMap_Mapping__Boxed* box(app::BoolStateMap_Mapping value) {
            return il2cpp::box_value<app::BoolStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::BoolStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::BoolStateMap_Mapping__Array>(get_class(), size);
        }
        inline app::BoolStateMap_Mapping__Array* create_array(const std::vector<app::BoolStateMap_Mapping>& items) {
            return il2cpp::array_new<app::BoolStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace BoolStateMap_Mapping
} // namespace app::classes::types
