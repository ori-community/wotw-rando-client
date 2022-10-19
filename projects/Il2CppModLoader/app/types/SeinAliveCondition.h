#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAliveCondition {
        namespace {
            inline app::SeinAliveCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinAliveCondition__Class** type_info = &type_info_ref;
        inline app::SeinAliveCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAliveCondition__Class>(type_info, "", "SeinAliveCondition");
        }
        inline app::SeinAliveCondition* create() {
            return il2cpp::create_object<app::SeinAliveCondition>(get_class());
        }
    } // namespace SeinAliveCondition
} // namespace app::classes::types
