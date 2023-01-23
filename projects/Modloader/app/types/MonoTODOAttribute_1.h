#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoTODOAttribute_1__Class.h>
#include <Modloader/app/structs/MonoTODOAttribute_1.h>

namespace app::classes::types {
    namespace MonoTODOAttribute_1 {
        namespace {
            inline app::MonoTODOAttribute_1__Class* type_info_ref = nullptr;
        }
        inline app::MonoTODOAttribute_1__Class** type_info = &type_info_ref;
        inline app::MonoTODOAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute_1__Class>(type_info, "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute_1* create() {
            return il2cpp::create_object<app::MonoTODOAttribute_1>(get_class());
        }
    } // namespace MonoTODOAttribute_1
} // namespace app::classes::types
