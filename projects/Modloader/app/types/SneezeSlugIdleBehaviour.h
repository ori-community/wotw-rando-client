#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugIdleBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugIdleBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugIdleBehaviour {
        namespace {
            inline app::SneezeSlugIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleBehaviour__Class>(type_info, "", "SneezeSlugIdleBehaviour");
        }
        inline app::SneezeSlugIdleBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleBehaviour
} // namespace app::classes::types
