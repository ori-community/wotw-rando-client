#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplyPhysicalManagerState {
        namespace {
            inline app::ApplyPhysicalManagerState__Class* type_info_ref = nullptr;
        }
        inline app::ApplyPhysicalManagerState__Class** type_info = &type_info_ref;
        inline app::ApplyPhysicalManagerState__Class* get_class() {
            return il2cpp::get_class<app::ApplyPhysicalManagerState__Class>(type_info, "", "ApplyPhysicalManagerState");
        }
        inline app::ApplyPhysicalManagerState* create() {
            return il2cpp::create_object<app::ApplyPhysicalManagerState>(get_class());
        }
    } // namespace ApplyPhysicalManagerState
} // namespace app::classes::types
