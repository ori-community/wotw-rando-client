#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetSegmentResult {
        namespace {
            inline app::GetSegmentResult__Class* type_info_ref = nullptr;
        }
        inline app::GetSegmentResult__Class** type_info = &type_info_ref;
        inline app::GetSegmentResult__Class* get_class() {
            return il2cpp::get_class<app::GetSegmentResult__Class>(type_info, "PlayFab.ClientModels", "GetSegmentResult");
        }
        inline app::GetSegmentResult* create() {
            return il2cpp::create_object<app::GetSegmentResult>(get_class());
        }
        inline app::GetSegmentResult__Array* create_array(int size) {
            return il2cpp::array_new<app::GetSegmentResult__Array>(get_class(), size);
        }
        inline app::GetSegmentResult__Array* create_array(const std::vector<app::GetSegmentResult*>& items) {
            return il2cpp::array_new<app::GetSegmentResult__Array>(get_class(), items);
        }
    } // namespace GetSegmentResult
} // namespace app::classes::types
