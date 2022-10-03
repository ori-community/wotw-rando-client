#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForTriggerEntity {
        namespace {
            app::WaitForTriggerEntity__Class* type_info_ref = nullptr;
        }
        app::WaitForTriggerEntity__Class** type_info = &type_info_ref;
        inline app::WaitForTriggerEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForTriggerEntity__Class>(type_info, "Moon.Timeline", "WaitForTriggerEntity");
        }
        inline app::WaitForTriggerEntity* create() {
            return il2cpp::create_object<app::WaitForTriggerEntity>(get_class());
        }
    } // namespace WaitForTriggerEntity
} // namespace app::classes::types
