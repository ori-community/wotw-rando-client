#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Led {
        namespace {
            inline app::Led__Class* type_info_ref = nullptr;
        }
        inline app::Led__Class** type_info = &type_info_ref;
        inline app::Led__Class* get_class() {
            return il2cpp::get_class<app::Led__Class>(type_info, "Colorful", "Led");
        }
        inline app::Led* create() {
            return il2cpp::create_object<app::Led>(get_class());
        }
    } // namespace Led
} // namespace app::classes::types
