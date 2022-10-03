#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetSegmentResult__Array {
        namespace {
            app::GetSegmentResult__Array__Class* type_info_ref = nullptr;
        }
        app::GetSegmentResult__Array__Class** type_info = &type_info_ref;
        inline app::GetSegmentResult__Array__Class* get_class() {
            return il2cpp::get_class<app::GetSegmentResult__Array__Class>(type_info, "PlayFab.ClientModels", "GetSegmentResult[]");
        }
        inline app::GetSegmentResult__Array* create() {
            return il2cpp::create_object<app::GetSegmentResult__Array>(get_class());
        }
    } // namespace GetSegmentResult__Array
} // namespace app::classes::types
