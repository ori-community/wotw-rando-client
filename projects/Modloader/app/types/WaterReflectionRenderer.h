#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterReflectionRenderer__Class.h>
#include <Modloader/app/structs/WaterReflectionRenderer.h>

namespace app::classes::types {
    namespace WaterReflectionRenderer {
        namespace {
            inline app::WaterReflectionRenderer__Class* type_info_ref = nullptr;
        }
        inline app::WaterReflectionRenderer__Class** type_info = &type_info_ref;
        inline app::WaterReflectionRenderer__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionRenderer__Class>(type_info, "", "WaterReflectionRenderer");
        }
        inline app::WaterReflectionRenderer* create() {
            return il2cpp::create_object<app::WaterReflectionRenderer>(get_class());
        }
    } // namespace WaterReflectionRenderer
} // namespace app::classes::types
