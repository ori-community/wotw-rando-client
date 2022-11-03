#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlList {
        namespace {
            inline app::ControlList__Class* type_info_ref = nullptr;
        }
        inline app::ControlList__Class** type_info = &type_info_ref;
        inline app::ControlList__Class* get_class() {
            return il2cpp::get_class<app::ControlList__Class>(type_info, "", "ControlList");
        }
        inline app::ControlList* create() {
            return il2cpp::create_object<app::ControlList>(get_class());
        }
    } // namespace ControlList
} // namespace app::classes::types
