#pragma once
#include <Modloader/app/structs/EventPipelineKey__Enum.h>
#include <Modloader/app/structs/EventPipelineKey__Enum__Array.h>
#include <Modloader/app/structs/EventPipelineKey__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventPipelineKey__Enum {
        inline app::EventPipelineKey__Enum__Class** type_info() {
            static app::EventPipelineKey__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventPipelineKey__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventPipelineKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventPipelineKey__Enum__Class>(type_info(), "PlayFab", "EventPipelineKey");
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
