#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrdkUser__Class.h>
#include <Modloader/app/structs/GrdkUser.h>

namespace app::classes::types {
    namespace GrdkUser {
        inline app::GrdkUser__Class** type_info = (app::GrdkUser__Class**)(modloader::win::memory::resolve_rva(0x04736948));
        inline app::GrdkUser__Class* get_class() {
            return il2cpp::get_class<app::GrdkUser__Class>(type_info, "SystemIntegration.User", "GrdkUser");
        }
        inline app::GrdkUser* create() {
            return il2cpp::create_object<app::GrdkUser>(get_class());
        }
    } // namespace GrdkUser
} // namespace app::classes::types
