#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MarkAsDontDestroyOnLoadOnAwake__Class.h>
#include <Modloader/app/structs/MarkAsDontDestroyOnLoadOnAwake.h>

namespace app::classes::types {
    namespace MarkAsDontDestroyOnLoadOnAwake {
        namespace {
            inline app::MarkAsDontDestroyOnLoadOnAwake__Class* type_info_ref = nullptr;
        }
        inline app::MarkAsDontDestroyOnLoadOnAwake__Class** type_info = &type_info_ref;
        inline app::MarkAsDontDestroyOnLoadOnAwake__Class* get_class() {
            return il2cpp::get_class<app::MarkAsDontDestroyOnLoadOnAwake__Class>(type_info, "", "MarkAsDontDestroyOnLoadOnAwake");
        }
        inline app::MarkAsDontDestroyOnLoadOnAwake* create() {
            return il2cpp::create_object<app::MarkAsDontDestroyOnLoadOnAwake>(get_class());
        }
    } // namespace MarkAsDontDestroyOnLoadOnAwake
} // namespace app::classes::types
