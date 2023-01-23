#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossSceneReferenceId__Array__Class.h>
#include <Modloader/app/structs/CrossSceneReferenceId__Array.h>

namespace app::classes::types {
    namespace CrossSceneReferenceId__Array {
        namespace {
            inline app::CrossSceneReferenceId__Array__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneReferenceId__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceId__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceId__Array__Class>(type_info, "Moon", "CrossSceneReferenceId[]");
        }
        inline app::CrossSceneReferenceId__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceId__Array>(get_class());
        }
    } // namespace CrossSceneReferenceId__Array
} // namespace app::classes::types
