#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SentEmailEventData {
        namespace {
            inline app::SentEmailEventData__Class* type_info_ref = nullptr;
        }
        inline app::SentEmailEventData__Class** type_info = &type_info_ref;
        inline app::SentEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::SentEmailEventData__Class>(type_info, "PlayFab.PlayStreamModels", "SentEmailEventData");
        }
        inline app::SentEmailEventData* create() {
            return il2cpp::create_object<app::SentEmailEventData>(get_class());
        }
    } // namespace SentEmailEventData
} // namespace app::classes::types
