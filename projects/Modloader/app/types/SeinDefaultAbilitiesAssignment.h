#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDefaultAbilitiesAssignment {
        namespace {
            inline app::SeinDefaultAbilitiesAssignment__Class* type_info_ref = nullptr;
        }
        inline app::SeinDefaultAbilitiesAssignment__Class** type_info = &type_info_ref;
        inline app::SeinDefaultAbilitiesAssignment__Class* get_class() {
            return il2cpp::get_class<app::SeinDefaultAbilitiesAssignment__Class>(type_info, "", "SeinDefaultAbilitiesAssignment");
        }
        inline app::SeinDefaultAbilitiesAssignment* create() {
            return il2cpp::create_object<app::SeinDefaultAbilitiesAssignment>(get_class());
        }
    } // namespace SeinDefaultAbilitiesAssignment
} // namespace app::classes::types
