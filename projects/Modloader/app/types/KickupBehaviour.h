#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KickupBehaviour {
        namespace {
            inline app::KickupBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KickupBehaviour__Class** type_info = &type_info_ref;
        inline app::KickupBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KickupBehaviour__Class>(type_info, "", "KickupBehaviour");
        }
        inline app::KickupBehaviour* create() {
            return il2cpp::create_object<app::KickupBehaviour>(get_class());
        }
    } // namespace KickupBehaviour
} // namespace app::classes::types
