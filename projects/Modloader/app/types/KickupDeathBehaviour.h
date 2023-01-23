#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KickupDeathBehaviour__Class.h>
#include <Modloader/app/structs/KickupDeathBehaviour.h>

namespace app::classes::types {
    namespace KickupDeathBehaviour {
        namespace {
            inline app::KickupDeathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KickupDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::KickupDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KickupDeathBehaviour__Class>(type_info, "", "KickupDeathBehaviour");
        }
        inline app::KickupDeathBehaviour* create() {
            return il2cpp::create_object<app::KickupDeathBehaviour>(get_class());
        }
    } // namespace KickupDeathBehaviour
} // namespace app::classes::types
