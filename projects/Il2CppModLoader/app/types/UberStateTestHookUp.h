#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateTestHookUp {
        namespace {
            app::UberStateTestHookUp__Class* type_info_ref = nullptr;
        }
        app::UberStateTestHookUp__Class** type_info = &type_info_ref;
        inline app::UberStateTestHookUp__Class* get_class() {
            return il2cpp::get_class<app::UberStateTestHookUp__Class>(type_info, "", "UberStateTestHookUp");
        }
        inline app::UberStateTestHookUp* create() {
            return il2cpp::create_object<app::UberStateTestHookUp>(get_class());
        }
    } // namespace UberStateTestHookUp
} // namespace app::classes::types
