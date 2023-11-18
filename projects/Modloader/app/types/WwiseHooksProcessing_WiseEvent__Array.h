#pragma once
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Array.h>
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseHooksProcessing_WiseEvent__Array {
        inline app::WwiseHooksProcessing_WiseEvent__Array__Class** type_info() {
            static app::WwiseHooksProcessing_WiseEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseHooksProcessing_WiseEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseHooksProcessing_WiseEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseHooksProcessing_WiseEvent__Array__Class>(type_info(), "", "WwiseHooksProcessing+WiseEvent[]");
        }
        inline app::WwiseHooksProcessing_WiseEvent__Array* create() {
            return il2cpp::create_object<app::WwiseHooksProcessing_WiseEvent__Array>(get_class());
        }
    } // namespace WwiseHooksProcessing_WiseEvent__Array
} // namespace app::classes::types
