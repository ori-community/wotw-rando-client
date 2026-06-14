#pragma once
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/IPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPermission {
        inline app::IPermission__Class** type_info() {
            static app::IPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPermission__Class**)(modloader::win::memory::resolve_rva(0x04707CF0));
            }
            return cache;
        }
        inline app::IPermission__Class* get_class() {
            return il2cpp::get_class<app::IPermission__Class>(type_info(), "System.Security", "IPermission");
        }
    } // namespace IPermission
} // namespace app::classes::types
