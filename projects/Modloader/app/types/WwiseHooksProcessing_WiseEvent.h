#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseEvent {
        namespace {
            inline app::WwiseHooksProcessing_WiseEvent__Class* type_info_ref = nullptr;
        }
        inline app::WwiseHooksProcessing_WiseEvent__Class** type_info = &type_info_ref;
        inline app::WwiseHooksProcessing_WiseEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseHooksProcessing_WiseEvent__Class>(type_info, "", "WwiseHooksProcessing", "WiseEvent");
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
