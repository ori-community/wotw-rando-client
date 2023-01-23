#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityString__Class.h>
#include <Modloader/app/structs/UnityString.h>

namespace app::classes::types {
    namespace UnityString {
        namespace {
            inline app::UnityString__Class* type_info_ref = nullptr;
        }
        inline app::UnityString__Class** type_info = &type_info_ref;
        inline app::UnityString__Class* get_class() {
            return il2cpp::get_class<app::UnityString__Class>(type_info, "UnityEngine", "UnityString");
        }
        inline app::UnityString* create() {
            return il2cpp::create_object<app::UnityString>(get_class());
        }
    } // namespace UnityString
} // namespace app::classes::types
