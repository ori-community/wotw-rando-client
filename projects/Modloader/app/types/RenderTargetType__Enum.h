#pragma once
#include <Modloader/app/structs/RenderTargetType__Enum.h>
#include <Modloader/app/structs/RenderTargetType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTargetType__Enum {
        inline app::RenderTargetType__Enum__Class** type_info() {
            static app::RenderTargetType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderTargetType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderTargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetType__Enum__Class>(type_info(), "Moon.Rendering", "RenderTargetType");
        }
        inline app::RenderTargetType__Enum* create() {
            return il2cpp::create_object<app::RenderTargetType__Enum>(get_class());
        }
    } // namespace RenderTargetType__Enum
} // namespace app::classes::types
