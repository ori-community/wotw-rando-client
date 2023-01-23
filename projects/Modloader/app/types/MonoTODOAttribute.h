#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoTODOAttribute__Class.h>
#include <Modloader/app/structs/MonoTODOAttribute.h>

namespace app::classes::types {
    namespace MonoTODOAttribute {
        namespace {
            inline app::MonoTODOAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MonoTODOAttribute__Class** type_info = &type_info_ref;
        inline app::MonoTODOAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute__Class>(type_info, "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute* create() {
            return il2cpp::create_object<app::MonoTODOAttribute>(get_class());
        }
    } // namespace MonoTODOAttribute
} // namespace app::classes::types
