#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PathNode__Array__Class.h>
#include <Modloader/app/structs/PathNode__Array.h>

namespace app::classes::types {
    namespace PathNode__Array {
        namespace {
            inline app::PathNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::PathNode__Array__Class** type_info = &type_info_ref;
        inline app::PathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::PathNode__Array__Class>(type_info, "", "PathNode[]");
        }
        inline app::PathNode__Array* create() {
            return il2cpp::create_object<app::PathNode__Array>(get_class());
        }
    } // namespace PathNode__Array
} // namespace app::classes::types
