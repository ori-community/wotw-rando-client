#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderingPath__Enum__Class.h>
#include <Modloader/app/structs/RenderingPath__Enum.h>

namespace app::classes::types {
    namespace RenderingPath__Enum {
        namespace {
            inline app::RenderingPath__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderingPath__Enum__Class** type_info = &type_info_ref;
        inline app::RenderingPath__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderingPath__Enum__Class>(type_info, "UnityEngine", "RenderingPath");
        }
        inline app::RenderingPath__Enum* create() {
            return il2cpp::create_object<app::RenderingPath__Enum>(get_class());
        }
    } // namespace RenderingPath__Enum
} // namespace app::classes::types
