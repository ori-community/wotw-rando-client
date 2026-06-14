#pragma once
#include <Modloader/app/structs/RenderBufferStoreAction__Enum__Array.h>
#include <Modloader/app/structs/RenderBufferStoreAction__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderBufferStoreAction__Enum__Array {
        inline app::RenderBufferStoreAction__Enum__Array__Class** type_info() {
            static app::RenderBufferStoreAction__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderBufferStoreAction__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderBufferStoreAction__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferStoreAction__Enum__Array__Class>(type_info(), "UnityEngine.Rendering", "RenderBufferStoreAction[]");
        }
        inline app::RenderBufferStoreAction__Enum__Array* create() {
            return il2cpp::create_object<app::RenderBufferStoreAction__Enum__Array>(get_class());
        }
    } // namespace RenderBufferStoreAction__Enum__Array
} // namespace app::classes::types
