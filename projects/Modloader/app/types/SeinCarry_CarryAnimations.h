#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinCarry_CarryAnimations {
        namespace {
            inline app::SeinCarry_CarryAnimations__Class* type_info_ref = nullptr;
        }
        inline app::SeinCarry_CarryAnimations__Class** type_info = &type_info_ref;
        inline app::SeinCarry_CarryAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_CarryAnimations__Class>(type_info, "", "SeinCarry", "CarryAnimations");
        }
        inline app::SeinCarry_CarryAnimations* create() {
            return il2cpp::create_object<app::SeinCarry_CarryAnimations>(get_class());
        }
    } // namespace SeinCarry_CarryAnimations
} // namespace app::classes::types
