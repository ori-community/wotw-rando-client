#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetSegmentResult__Array__Class.h>
#include <Modloader/app/structs/GetSegmentResult__Array.h>

namespace app::classes::types {
    namespace GetSegmentResult__Array {
        namespace {
            inline app::GetSegmentResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::GetSegmentResult__Array__Class** type_info = &type_info_ref;
        inline app::GetSegmentResult__Array__Class* get_class() {
            return il2cpp::get_class<app::GetSegmentResult__Array__Class>(type_info, "PlayFab.ClientModels", "GetSegmentResult[]");
        }
        inline app::GetSegmentResult__Array* create() {
            return il2cpp::create_object<app::GetSegmentResult__Array>(get_class());
        }
    } // namespace GetSegmentResult__Array
} // namespace app::classes::types
