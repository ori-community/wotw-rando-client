#pragma once
#include <Modloader/app/structs/SceneMetaData__Array.h>
#include <Modloader/app/structs/SceneMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData__Array {
        inline app::SceneMetaData__Array__Class** type_info() {
            static app::SceneMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x04793ED0));
            }
            return cache;
        }
        inline app::SceneMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData__Array__Class>(type_info(), "", "SceneMetaData[]");
        }
        inline app::SceneMetaData__Array* create() {
            return il2cpp::create_object<app::SceneMetaData__Array>(get_class());
        }
    } // namespace SceneMetaData__Array
} // namespace app::classes::types
