#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderFlags__Enum {
        namespace {
            inline app::RenderFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderFlags__Enum__Class** type_info = &type_info_ref;
        inline app::RenderFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderFlags__Enum__Class>(type_info, "", "RenderFlags");
        }
        inline app::RenderFlags__Enum* create() {
            return il2cpp::create_object<app::RenderFlags__Enum>(get_class());
        }
    } // namespace RenderFlags__Enum
} // namespace app::classes::types
