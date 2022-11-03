#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CategoryAttribute_2 {
        namespace {
            inline app::CategoryAttribute_2__Class* type_info_ref = nullptr;
        }
        inline app::CategoryAttribute_2__Class** type_info = &type_info_ref;
        inline app::CategoryAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::CategoryAttribute_2__Class>(type_info, "", "CategoryAttribute");
        }
        inline app::CategoryAttribute_2* create() {
            return il2cpp::create_object<app::CategoryAttribute_2>(get_class());
        }
    } // namespace CategoryAttribute_2
} // namespace app::classes::types
