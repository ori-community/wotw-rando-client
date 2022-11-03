#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Button_1 {
        namespace {
            inline app::Button_1__Class* type_info_ref = nullptr;
        }
        inline app::Button_1__Class** type_info = &type_info_ref;
        inline app::Button_1__Class* get_class() {
            return il2cpp::get_class<app::Button_1__Class>(type_info, "Moon.UI", "Button");
        }
        inline app::Button_1* create() {
            return il2cpp::create_object<app::Button_1>(get_class());
        }
    } // namespace Button_1
} // namespace app::classes::types
