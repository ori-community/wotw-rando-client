#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCFont {
        namespace {
            inline app::CCFont__Class* type_info_ref = nullptr;
        }
        inline app::CCFont__Class** type_info = &type_info_ref;
        inline app::CCFont__Class* get_class() {
            return il2cpp::get_class<app::CCFont__Class>(type_info, "", "CCFont");
        }
        inline app::CCFont* create() {
            return il2cpp::create_object<app::CCFont>(get_class());
        }
    } // namespace CCFont
} // namespace app::classes::types
