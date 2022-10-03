#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseBank {
        namespace {
            app::WwiseHooksProcessing_WiseBank__Class* type_info_ref = nullptr;
        }
        app::WwiseHooksProcessing_WiseBank__Class** type_info = &type_info_ref;
        inline app::WwiseHooksProcessing_WiseBank__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseHooksProcessing_WiseBank__Class>(type_info, "", "WwiseHooksProcessing", "WiseBank");
        }
        inline app::WwiseHooksProcessing_WiseBank* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing_WiseBank>(get_class());
        }
        inline app::WwiseHooksProcessing_WiseBank__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseHooksProcessing_WiseBank__Array>(get_class(), size);
        }
    } // namespace WwiseHooksProcessing_WiseBank
} // namespace app::classes::types
