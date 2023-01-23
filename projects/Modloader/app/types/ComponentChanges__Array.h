#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComponentChanges__Array__Class.h>
#include <Modloader/app/structs/ComponentChanges__Array.h>

namespace app::classes::types {
    namespace ComponentChanges__Array {
        namespace {
            inline app::ComponentChanges__Array__Class* type_info_ref = nullptr;
        }
        inline app::ComponentChanges__Array__Class** type_info = &type_info_ref;
        inline app::ComponentChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::ComponentChanges__Array__Class>(type_info, "Moon.ReviewFramework", "ComponentChanges[]");
        }
        inline app::ComponentChanges__Array* create() {
            return il2cpp::create_object<app::ComponentChanges__Array>(get_class());
        }
    } // namespace ComponentChanges__Array
} // namespace app::classes::types
