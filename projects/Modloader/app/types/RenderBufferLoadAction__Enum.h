#pragma once
#include <Modloader/app/structs/RenderBufferLoadAction__Enum.h>
#include <Modloader/app/structs/RenderBufferLoadAction__Enum__Array.h>
#include <Modloader/app/structs/RenderBufferLoadAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderBufferLoadAction__Enum {
        inline app::RenderBufferLoadAction__Enum__Class** type_info() {
            static app::RenderBufferLoadAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderBufferLoadAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderBufferLoadAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferLoadAction__Enum__Class>(type_info(), "UnityEngine.Rendering", "RenderBufferLoadAction");
        }
        inline app::RenderBufferLoadAction__Enum* create() {
            return il2cpp::create_object<app::RenderBufferLoadAction__Enum>(get_class());
        }
        inline app::RenderBufferLoadAction__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderBufferLoadAction__Enum__Array>(get_class(), size);
        }
        inline app::RenderBufferLoadAction__Enum__Array* create_array(const std::vector<app::RenderBufferLoadAction__Enum*>& items) {
            return il2cpp::array_new<app::RenderBufferLoadAction__Enum__Array>(get_class(), items);
        }
    } // namespace RenderBufferLoadAction__Enum
} // namespace app::classes::types
