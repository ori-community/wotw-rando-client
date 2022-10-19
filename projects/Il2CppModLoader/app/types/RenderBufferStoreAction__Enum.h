#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderBufferStoreAction__Enum {
        namespace {
            inline app::RenderBufferStoreAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderBufferStoreAction__Enum__Class** type_info = &type_info_ref;
        inline app::RenderBufferStoreAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderBufferStoreAction__Enum__Class>(type_info, "UnityEngine.Rendering", "RenderBufferStoreAction");
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
