#pragma once
#include <Modloader/app/structs/GrdkUser.h>
#include <Modloader/app/structs/GrdkUser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrdkUser {
        inline app::GrdkUser__Class** type_info() {
            static app::GrdkUser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrdkUser__Class**)(modloader::win::memory::resolve_rva(0x04736948));
            }
            return cache;
        }
        inline app::GrdkUser__Class* get_class() {
            return il2cpp::get_class<app::GrdkUser__Class>(type_info(), "SystemIntegration.User", "GrdkUser");
        }
        inline app::GrdkUser* create() {
            return il2cpp::create_object<app::GrdkUser>(get_class());
        }
    } // namespace GrdkUser
} // namespace app::classes::types
