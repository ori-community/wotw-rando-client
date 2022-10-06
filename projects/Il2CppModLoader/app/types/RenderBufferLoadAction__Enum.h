#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderBufferLoadAction__Enum {
        namespace {
            app::RenderBufferLoadAction__Enum__Class* type_info_ref = nullptr;
        }
        app::RenderBufferLoadAction__Enum__Class** type_info = &type_info_ref;
        inline app::RenderBufferLoadAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferLoadAction__Enum__Class>(type_info, "UnityEngine.Rendering", "RenderBufferLoadAction");
        }
        inline app::RenderBufferLoadAction__Enum* create() {
            return il2cpp::create_object<app::RenderBufferLoadAction__Enum>(get_class());
        }
        inline app::RenderBufferLoadAction__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderBufferLoadAction__Enum__Array>(get_class(), size);
        }
        inline app::RenderBufferLoadAction__Enum__Array* create_array(const std::vector<app::RenderBufferLoadAction__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::RenderBufferLoadAction__Enum__Array>(get_class(), items);
        }
    } // namespace RenderBufferLoadAction__Enum
} // namespace app::classes::types
