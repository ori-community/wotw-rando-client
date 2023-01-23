#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SelectionBaseAttribute__Class.h>
#include <Modloader/app/structs/SelectionBaseAttribute.h>

namespace app::classes::types {
    namespace SelectionBaseAttribute {
        namespace {
            inline app::SelectionBaseAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SelectionBaseAttribute__Class** type_info = &type_info_ref;
        inline app::SelectionBaseAttribute__Class* get_class() {
            return il2cpp::get_class<app::SelectionBaseAttribute__Class>(type_info, "UnityEngine", "SelectionBaseAttribute");
        }
        inline app::SelectionBaseAttribute* create() {
            return il2cpp::create_object<app::SelectionBaseAttribute>(get_class());
        }
    } // namespace SelectionBaseAttribute
} // namespace app::classes::types
