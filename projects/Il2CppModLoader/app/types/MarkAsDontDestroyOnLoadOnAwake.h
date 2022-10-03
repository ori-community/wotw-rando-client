#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarkAsDontDestroyOnLoadOnAwake {
        namespace {
            app::MarkAsDontDestroyOnLoadOnAwake__Class* type_info_ref = nullptr;
        }
        app::MarkAsDontDestroyOnLoadOnAwake__Class** type_info = &type_info_ref;
        inline app::MarkAsDontDestroyOnLoadOnAwake__Class* get_class() {
            return il2cpp::get_class<app::MarkAsDontDestroyOnLoadOnAwake__Class>(type_info, "", "MarkAsDontDestroyOnLoadOnAwake");
        }
        inline app::MarkAsDontDestroyOnLoadOnAwake* create() {
            return il2cpp::create_object<app::MarkAsDontDestroyOnLoadOnAwake>(get_class());
        }
    } // namespace MarkAsDontDestroyOnLoadOnAwake
} // namespace app::classes::types
