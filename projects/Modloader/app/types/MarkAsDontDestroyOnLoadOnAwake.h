#pragma once
#include <Modloader/app/structs/MarkAsDontDestroyOnLoadOnAwake.h>
#include <Modloader/app/structs/MarkAsDontDestroyOnLoadOnAwake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarkAsDontDestroyOnLoadOnAwake {
        inline app::MarkAsDontDestroyOnLoadOnAwake__Class** type_info() {
            static app::MarkAsDontDestroyOnLoadOnAwake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarkAsDontDestroyOnLoadOnAwake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarkAsDontDestroyOnLoadOnAwake__Class* get_class() {
            return il2cpp::get_class<app::MarkAsDontDestroyOnLoadOnAwake__Class>(type_info(), "", "MarkAsDontDestroyOnLoadOnAwake");
        }
        inline app::MarkAsDontDestroyOnLoadOnAwake* create() {
            return il2cpp::create_object<app::MarkAsDontDestroyOnLoadOnAwake>(get_class());
        }
    } // namespace MarkAsDontDestroyOnLoadOnAwake
} // namespace app::classes::types
