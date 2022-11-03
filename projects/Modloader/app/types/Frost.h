#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Frost {
        namespace {
            inline app::Frost__Class* type_info_ref = nullptr;
        }
        inline app::Frost__Class** type_info = &type_info_ref;
        inline app::Frost__Class* get_class() {
            return il2cpp::get_class<app::Frost__Class>(type_info, "Colorful", "Frost");
        }
        inline app::Frost* create() {
            return il2cpp::create_object<app::Frost>(get_class());
        }
    } // namespace Frost
} // namespace app::classes::types
