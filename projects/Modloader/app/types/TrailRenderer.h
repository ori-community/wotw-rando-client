#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrailRenderer__Class.h>
#include <Modloader/app/structs/TrailRenderer.h>

namespace app::classes::types {
    namespace TrailRenderer {
        namespace {
            inline app::TrailRenderer__Class* type_info_ref = nullptr;
        }
        inline app::TrailRenderer__Class** type_info = &type_info_ref;
        inline app::TrailRenderer__Class* get_class() {
            return il2cpp::get_class<app::TrailRenderer__Class>(type_info, "UnityEngine", "TrailRenderer");
        }
        inline app::TrailRenderer* create() {
            return il2cpp::create_object<app::TrailRenderer>(get_class());
        }
    } // namespace TrailRenderer
} // namespace app::classes::types
