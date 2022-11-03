#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Door {
        namespace {
            inline app::Door__Class* type_info_ref = nullptr;
        }
        inline app::Door__Class** type_info = &type_info_ref;
        inline app::Door__Class* get_class() {
            return il2cpp::get_class<app::Door__Class>(type_info, "", "Door");
        }
        inline app::Door* create() {
            return il2cpp::create_object<app::Door>(get_class());
        }
    } // namespace Door
} // namespace app::classes::types
