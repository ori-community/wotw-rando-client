#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWindupBehaviour {
        namespace {
            inline app::MortarWindupBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarWindupBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarWindupBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarWindupBehaviour__Class>(type_info, "", "MortarWindupBehaviour");
        }
        inline app::MortarWindupBehaviour* create() {
            return il2cpp::create_object<app::MortarWindupBehaviour>(get_class());
        }
    } // namespace MortarWindupBehaviour
} // namespace app::classes::types
