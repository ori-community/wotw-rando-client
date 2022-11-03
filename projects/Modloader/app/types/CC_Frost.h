#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_Frost {
        namespace {
            inline app::CC_Frost__Class* type_info_ref = nullptr;
        }
        inline app::CC_Frost__Class** type_info = &type_info_ref;
        inline app::CC_Frost__Class* get_class() {
            return il2cpp::get_class<app::CC_Frost__Class>(type_info, "", "CC_Frost");
        }
        inline app::CC_Frost* create() {
            return il2cpp::create_object<app::CC_Frost>(get_class());
        }
    } // namespace CC_Frost
} // namespace app::classes::types
