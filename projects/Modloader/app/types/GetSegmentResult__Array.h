#pragma once
#include <Modloader/app/structs/GetSegmentResult__Array.h>
#include <Modloader/app/structs/GetSegmentResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetSegmentResult__Array {
        inline app::GetSegmentResult__Array__Class** type_info() {
            static app::GetSegmentResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetSegmentResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetSegmentResult__Array__Class* get_class() {
            return il2cpp::get_class<app::GetSegmentResult__Array__Class>(type_info(), "PlayFab.ClientModels", "GetSegmentResult[]");
        }
        inline app::GetSegmentResult__Array* create() {
            return il2cpp::create_object<app::GetSegmentResult__Array>(get_class());
        }
    } // namespace GetSegmentResult__Array
} // namespace app::classes::types
