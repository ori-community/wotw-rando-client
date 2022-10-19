#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeT {
        namespace {
            inline app::TimeT__Class* type_info_ref = nullptr;
        }
        inline app::TimeT__Class** type_info = &type_info_ref;
        inline app::TimeT__Class* get_class() {
            return il2cpp::get_class<app::TimeT__Class>(type_info, "XGamingRuntime.Interop", "TimeT");
        }
        inline app::TimeT* create() {
            return il2cpp::create_object<app::TimeT>(get_class());
        }
        inline app::TimeT__Boxed* box(app::TimeT value) {
            return il2cpp::box_value<app::TimeT__Boxed>(get_class(), value);
        }
    } // namespace TimeT
} // namespace app::classes::types
