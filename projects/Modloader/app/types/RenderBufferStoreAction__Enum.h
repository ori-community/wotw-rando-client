#pragma once
#include <Modloader/app/structs/RenderBufferStoreAction__Enum.h>
#include <Modloader/app/structs/RenderBufferStoreAction__Enum__Array.h>
#include <Modloader/app/structs/RenderBufferStoreAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderBufferStoreAction__Enum {
        inline app::RenderBufferStoreAction__Enum__Class** type_info() {
            static app::RenderBufferStoreAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderBufferStoreAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderBufferStoreAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferStoreAction__Enum__Class>(type_info(), "UnityEngine.Rendering", "RenderBufferStoreAction");
        }
        inline app::RenderBufferStoreAction__Enum* create() {
            return il2cpp::create_object<app::RenderBufferStoreAction__Enum>(get_class());
        }
        inline app::RenderBufferStoreAction__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderBufferStoreAction__Enum__Array>(get_class(), size);
        }
        inline app::RenderBufferStoreAction__Enum__Array* create_array(const std::vector<app::RenderBufferStoreAction__Enum*>& items) {
            return il2cpp::array_new<app::RenderBufferStoreAction__Enum__Array>(get_class(), items);
        }
    } // namespace RenderBufferStoreAction__Enum
} // namespace app::classes::types
