#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsRendererVisible__Class.h>
#include <Modloader/app/structs/IsRendererVisible.h>

namespace app::classes::types {
    namespace IsRendererVisible {
        namespace {
            inline app::IsRendererVisible__Class* type_info_ref = nullptr;
        }
        inline app::IsRendererVisible__Class** type_info = &type_info_ref;
        inline app::IsRendererVisible__Class* get_class() {
            return il2cpp::get_class<app::IsRendererVisible__Class>(type_info, "", "IsRendererVisible");
        }
        inline app::IsRendererVisible* create() {
            return il2cpp::create_object<app::IsRendererVisible>(get_class());
        }
    } // namespace IsRendererVisible
} // namespace app::classes::types
