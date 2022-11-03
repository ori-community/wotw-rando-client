#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightPriority_Layer__Enum {
        namespace {
            inline app::LightPriority_Layer__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightPriority_Layer__Enum__Class** type_info = &type_info_ref;
        inline app::LightPriority_Layer__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightPriority_Layer__Enum__Class>(type_info, "", "LightPriority", "Layer");
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
