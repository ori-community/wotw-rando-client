#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderingType__Enum__Class.h>
#include <Modloader/app/structs/RenderingType__Enum.h>

namespace app::classes::types {
    namespace RenderingType__Enum {
        namespace {
            inline app::RenderingType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderingType__Enum__Class** type_info = &type_info_ref;
        inline app::RenderingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderingType__Enum__Class>(type_info, "Moon.VisualDebug", "RenderingType");
        }
        inline app::RenderingType__Enum* create() {
            return il2cpp::create_object<app::RenderingType__Enum>(get_class());
        }
    } // namespace RenderingType__Enum
} // namespace app::classes::types
