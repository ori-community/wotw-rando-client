#pragma once
#include <Modloader/app/structs/WwiseHooksProcessing_WiseBank.h>
#include <Modloader/app/structs/WwiseHooksProcessing_WiseBank__Array.h>
#include <Modloader/app/structs/WwiseHooksProcessing_WiseBank__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseBank {
        inline app::WwiseHooksProcessing_WiseBank__Class** type_info() {
            static app::WwiseHooksProcessing_WiseBank__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseHooksProcessing_WiseBank__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseHooksProcessing_WiseBank__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseHooksProcessing_WiseBank__Class>(type_info(), "", "WwiseHooksProcessing", "WiseBank");
        }
        inline app::WwiseHooksProcessing_WiseBank* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing_WiseBank>(get_class());
        }
        inline app::WwiseHooksProcessing_WiseBank__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseHooksProcessing_WiseBank__Array>(get_class(), size);
        }
        inline app::WwiseHooksProcessing_WiseBank__Array* create_array(const std::vector<app::WwiseHooksProcessing_WiseBank*>& items) {
            return il2cpp::array_new<app::WwiseHooksProcessing_WiseBank__Array>(get_class(), items);
        }
    } // namespace WwiseHooksProcessing_WiseBank
} // namespace app::classes::types
