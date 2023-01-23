#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneMetaData__Array__Class.h>
#include <Modloader/app/structs/SceneMetaData__Array.h>

namespace app::classes::types {
    namespace SceneMetaData__Array {
        inline app::SceneMetaData__Array__Class** type_info = (app::SceneMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x04793ED0));
        inline app::SceneMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData__Array__Class>(type_info, "", "SceneMetaData[]");
        }
        inline app::SceneMetaData__Array* create() {
            return il2cpp::create_object<app::SceneMetaData__Array>(get_class());
        }
    } // namespace SceneMetaData__Array
} // namespace app::classes::types
