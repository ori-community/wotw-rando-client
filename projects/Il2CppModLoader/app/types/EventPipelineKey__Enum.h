#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventPipelineKey__Enum {
        namespace {
            inline app::EventPipelineKey__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventPipelineKey__Enum__Class** type_info = &type_info_ref;
        inline app::EventPipelineKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventPipelineKey__Enum__Class>(type_info, "PlayFab", "EventPipelineKey");
        }
        inline app::EventPipelineKey__Enum* create() {
            return il2cpp::create_object<app::EventPipelineKey__Enum>(get_class());
        }
        inline app::EventPipelineKey__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EventPipelineKey__Enum__Array>(get_class(), size);
        }
        inline app::EventPipelineKey__Enum__Array* create_array(const std::vector<app::EventPipelineKey__Enum*>& items) {
            return il2cpp::array_new<app::EventPipelineKey__Enum__Array>(get_class(), items);
        }
    } // namespace EventPipelineKey__Enum
} // namespace app::classes::types
