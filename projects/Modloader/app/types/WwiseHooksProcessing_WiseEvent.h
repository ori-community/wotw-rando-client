#pragma once
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent.h>
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Array.h>
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseEvent {
        inline app::WwiseHooksProcessing_WiseEvent__Class** type_info() {
            static app::WwiseHooksProcessing_WiseEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseHooksProcessing_WiseEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseHooksProcessing_WiseEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseHooksProcessing_WiseEvent__Class>(type_info(), "", "WwiseHooksProcessing", "WiseEvent");
        }
        inline app::WwiseHooksProcessing_WiseEvent* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing_WiseEvent>(get_class());
        }
        inline app::WwiseHooksProcessing_WiseEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseHooksProcessing_WiseEvent__Array>(get_class(), size);
        }
        inline app::WwiseHooksProcessing_WiseEvent__Array* create_array(const std::vector<app::WwiseHooksProcessing_WiseEvent*>& items) {
            return il2cpp::array_new<app::WwiseHooksProcessing_WiseEvent__Array>(get_class(), items);
        }
    } // namespace WwiseHooksProcessing_WiseEvent
} // namespace app::classes::types
