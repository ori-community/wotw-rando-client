#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTODOAttribute_2 {
        namespace {
            inline app::MonoTODOAttribute_2__Class* type_info_ref = nullptr;
        }
        inline app::MonoTODOAttribute_2__Class** type_info = &type_info_ref;
        inline app::MonoTODOAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute_2__Class>(type_info, "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute_2* create() {
            return il2cpp::create_object<app::MonoTODOAttribute_2>(get_class());
        }
    } // namespace MonoTODOAttribute_2
} // namespace app::classes::types
