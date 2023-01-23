#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatStateMap_Mapping__Class.h>
#include <Modloader/app/structs/FloatStateMap_Mapping.h>
#include <Modloader/app/structs/FloatStateMap_Mapping__Boxed.h>
#include <Modloader/app/structs/FloatStateMap_Mapping__Array.h>

namespace app::classes::types {
    namespace FloatStateMap_Mapping {
        inline app::FloatStateMap_Mapping__Class** type_info = (app::FloatStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x047726F0));
        inline app::FloatStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatStateMap_Mapping__Class>(type_info, "", "FloatStateMap", "Mapping");
        }
        inline app::FloatStateMap_Mapping* create() {
            return il2cpp::create_object<app::FloatStateMap_Mapping>(get_class());
        }
        inline app::FloatStateMap_Mapping__Boxed* box(app::FloatStateMap_Mapping value) {
            return il2cpp::box_value<app::FloatStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::FloatStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatStateMap_Mapping__Array>(get_class(), size);
        }
        inline app::FloatStateMap_Mapping__Array* create_array(const std::vector<app::FloatStateMap_Mapping>& items) {
            return il2cpp::array_new<app::FloatStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace FloatStateMap_Mapping
} // namespace app::classes::types
