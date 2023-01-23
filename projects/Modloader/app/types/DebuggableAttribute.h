#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebuggableAttribute__Class.h>
#include <Modloader/app/structs/DebuggableAttribute.h>

namespace app::classes::types {
    namespace DebuggableAttribute {
        namespace {
            inline app::DebuggableAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggableAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggableAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggableAttribute__Class>(type_info, "System.Diagnostics", "DebuggableAttribute");
        }
        inline app::DebuggableAttribute* create() {
            return il2cpp::create_object<app::DebuggableAttribute>(get_class());
        }
    } // namespace DebuggableAttribute
} // namespace app::classes::types
