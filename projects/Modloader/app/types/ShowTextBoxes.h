#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowTextBoxes {
        namespace {
            inline app::ShowTextBoxes__Class* type_info_ref = nullptr;
        }
        inline app::ShowTextBoxes__Class** type_info = &type_info_ref;
        inline app::ShowTextBoxes__Class* get_class() {
            return il2cpp::get_class<app::ShowTextBoxes__Class>(type_info, "", "ShowTextBoxes");
        }
        inline app::ShowTextBoxes* create() {
            return il2cpp::create_object<app::ShowTextBoxes>(get_class());
        }
    } // namespace ShowTextBoxes
} // namespace app::classes::types
