#pragma once
#include <Modloader/app/structs/CodeAccessPermission.h>
#include <Modloader/app/structs/CodeAccessPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodeAccessPermission {
        inline app::CodeAccessPermission__Class** type_info() {
            static app::CodeAccessPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CodeAccessPermission__Class**)(modloader::win::memory::resolve_rva(0x0477E740));
            }
            return cache;
        }
        inline app::CodeAccessPermission__Class* get_class() {
            return il2cpp::get_class<app::CodeAccessPermission__Class>(type_info(), "System.Security", "CodeAccessPermission");
        }
        inline app::CodeAccessPermission* create() {
            return il2cpp::create_object<app::CodeAccessPermission>(get_class());
        }
    } // namespace CodeAccessPermission
} // namespace app::classes::types
