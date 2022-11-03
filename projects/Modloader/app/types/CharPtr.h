#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharPtr {
        namespace {
            inline app::CharPtr__Class* type_info_ref = nullptr;
        }
        inline app::CharPtr__Class** type_info = &type_info_ref;
        inline app::CharPtr__Class* get_class() {
            return il2cpp::get_class<app::CharPtr__Class>(type_info, "System", "Char*");
        }
        inline app::CharPtr* create() {
            return il2cpp::create_object<app::CharPtr>(get_class());
        }
    } // namespace CharPtr
} // namespace app::classes::types
