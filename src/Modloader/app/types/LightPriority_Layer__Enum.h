#pragma once
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum__Array.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightPriority_Layer__Enum {
        inline app::LightPriority_Layer__Enum__Class** type_info() {
            static app::LightPriority_Layer__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightPriority_Layer__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightPriority_Layer__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightPriority_Layer__Enum__Class>(type_info(), "", "LightPriority", "Layer");
        }
        inline app::LightPriority_Layer__Enum* create() {
            return il2cpp::create_object<app::LightPriority_Layer__Enum>(get_class());
        }
        inline app::LightPriority_Layer__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::LightPriority_Layer__Enum__Array>(get_class(), size);
        }
        inline app::LightPriority_Layer__Enum__Array* create_array(const std::vector<app::LightPriority_Layer__Enum*>& items) {
            return il2cpp::array_new<app::LightPriority_Layer__Enum__Array>(get_class(), items);
        }
    } // namespace LightPriority_Layer__Enum
} // namespace app::classes::types
