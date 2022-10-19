#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetIndicator {
        namespace {
            inline app::TargetIndicator__Class* type_info_ref = nullptr;
        }
        inline app::TargetIndicator__Class** type_info = &type_info_ref;
        inline app::TargetIndicator__Class* get_class() {
            return il2cpp::get_class<app::TargetIndicator__Class>(type_info, "", "TargetIndicator");
        }
        inline app::TargetIndicator* create() {
            return il2cpp::create_object<app::TargetIndicator>(get_class());
        }
    } // namespace TargetIndicator
} // namespace app::classes::types
