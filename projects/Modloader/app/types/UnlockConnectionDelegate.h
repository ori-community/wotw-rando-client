#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlockConnectionDelegate__Class.h>
#include <Modloader/app/structs/UnlockConnectionDelegate.h>

namespace app::classes::types {
    namespace UnlockConnectionDelegate {
        namespace {
            inline app::UnlockConnectionDelegate__Class* type_info_ref = nullptr;
        }
        inline app::UnlockConnectionDelegate__Class** type_info = &type_info_ref;
        inline app::UnlockConnectionDelegate__Class* get_class() {
            return il2cpp::get_class<app::UnlockConnectionDelegate__Class>(type_info, "System.Net", "UnlockConnectionDelegate");
        }
        inline app::UnlockConnectionDelegate* create() {
            return il2cpp::create_object<app::UnlockConnectionDelegate>(get_class());
        }
    } // namespace UnlockConnectionDelegate
} // namespace app::classes::types
