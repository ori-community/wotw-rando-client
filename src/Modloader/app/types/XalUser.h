#pragma once
#include <Modloader/app/structs/XalUser.h>
#include <Modloader/app/structs/XalUser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUser {
        inline app::XalUser__Class** type_info() {
            static app::XalUser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUser__Class**)(modloader::win::memory::resolve_rva(0x04742FB0));
            }
            return cache;
        }
        inline app::XalUser__Class* get_class() {
            return il2cpp::get_class<app::XalUser__Class>(type_info(), "SystemIntegration", "XalUser");
        }
        inline app::XalUser* create() {
            return il2cpp::create_object<app::XalUser>(get_class());
        }
    } // namespace XalUser
} // namespace app::classes::types
