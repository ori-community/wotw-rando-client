#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Phone {
        namespace {
            inline app::Phone__Class* type_info_ref = nullptr;
        }
        inline app::Phone__Class** type_info = &type_info_ref;
        inline app::Phone__Class* get_class() {
            return il2cpp::get_class<app::Phone__Class>(type_info, "RootMotion.Demos", "Phone");
        }
        inline app::Phone* create() {
            return il2cpp::create_object<app::Phone>(get_class());
        }
    } // namespace Phone
} // namespace app::classes::types
