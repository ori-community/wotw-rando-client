#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateApplyContext__Enum {
        namespace {
            app::UberStateApplyContext__Enum__Class* type_info_ref = nullptr;
        }
        app::UberStateApplyContext__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateApplyContext__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberStateApplyContext__Enum__Class>(type_info, "Moon", "UberStateApplyContext");
        }
        inline app::UberStateApplyContext__Enum* create() {
            return il2cpp::create_object<app::UberStateApplyContext__Enum>(get_class());
        }
    } // namespace UberStateApplyContext__Enum
} // namespace app::classes::types
