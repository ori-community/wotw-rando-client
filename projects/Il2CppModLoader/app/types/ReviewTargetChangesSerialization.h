#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReviewTargetChangesSerialization {
        namespace {
            inline app::ReviewTargetChangesSerialization__Class* type_info_ref = nullptr;
        }
        inline app::ReviewTargetChangesSerialization__Class** type_info = &type_info_ref;
        inline app::ReviewTargetChangesSerialization__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetChangesSerialization__Class>(type_info, "Moon.ReviewFramework", "ReviewTargetChangesSerialization");
        }
        inline app::ReviewTargetChangesSerialization* create() {
            return il2cpp::create_object<app::ReviewTargetChangesSerialization>(get_class());
        }
    } // namespace ReviewTargetChangesSerialization
} // namespace app::classes::types
