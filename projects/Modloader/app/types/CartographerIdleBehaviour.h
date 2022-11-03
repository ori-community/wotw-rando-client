#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour {
        namespace {
            inline app::CartographerIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CartographerIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::CartographerIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerIdleBehaviour__Class>(type_info, "", "CartographerIdleBehaviour");
        }
        inline app::CartographerIdleBehaviour* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour>(get_class());
        }
    } // namespace CartographerIdleBehaviour
} // namespace app::classes::types
