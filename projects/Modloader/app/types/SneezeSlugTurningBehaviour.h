#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugTurningBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugTurningBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugTurningBehaviour {
        namespace {
            inline app::SneezeSlugTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugTurningBehaviour__Class>(type_info, "Moon", "SneezeSlugTurningBehaviour");
        }
        inline app::SneezeSlugTurningBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugTurningBehaviour>(get_class());
        }
    } // namespace SneezeSlugTurningBehaviour
} // namespace app::classes::types
