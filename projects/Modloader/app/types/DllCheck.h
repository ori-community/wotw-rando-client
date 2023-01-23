#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DllCheck__Class.h>
#include <Modloader/app/structs/DllCheck.h>

namespace app::classes::types {
    namespace DllCheck {
        namespace {
            inline app::DllCheck__Class* type_info_ref = nullptr;
        }
        inline app::DllCheck__Class** type_info = &type_info_ref;
        inline app::DllCheck__Class* get_class() {
            return il2cpp::get_class<app::DllCheck__Class>(type_info, "Steamworks", "DllCheck");
        }
        inline app::DllCheck* create() {
            return il2cpp::create_object<app::DllCheck>(get_class());
        }
    } // namespace DllCheck
} // namespace app::classes::types
