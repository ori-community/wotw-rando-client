#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseBank__Array {
        namespace {
            inline app::WwiseHooksProcessing_WiseBank__Array__Class* type_info_ref = nullptr;
        }
        inline app::WwiseHooksProcessing_WiseBank__Array__Class** type_info = &type_info_ref;
        inline app::WwiseHooksProcessing_WiseBank__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseHooksProcessing_WiseBank__Array__Class>(type_info, "", "WwiseHooksProcessing+WiseBank[]");
        }
        inline app::WwiseHooksProcessing_WiseBank__Array* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing_WiseBank__Array>(get_class());
        }
    } // namespace WwiseHooksProcessing_WiseBank__Array
} // namespace app::classes::types
