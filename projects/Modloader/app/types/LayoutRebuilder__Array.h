#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayoutRebuilder__Array__Class.h>
#include <Modloader/app/structs/LayoutRebuilder__Array.h>

namespace app::classes::types {
    namespace LayoutRebuilder__Array {
        namespace {
            inline app::LayoutRebuilder__Array__Class* type_info_ref = nullptr;
        }
        inline app::LayoutRebuilder__Array__Class** type_info = &type_info_ref;
        inline app::LayoutRebuilder__Array__Class* get_class() {
            return il2cpp::get_class<app::LayoutRebuilder__Array__Class>(type_info, "UnityEngine.UI", "LayoutRebuilder[]");
        }
        inline app::LayoutRebuilder__Array* create() {
            return il2cpp::create_object<app::LayoutRebuilder__Array>(get_class());
        }
    } // namespace LayoutRebuilder__Array
} // namespace app::classes::types
