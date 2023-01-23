#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour__Class.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour {
        namespace {
            inline app::SneezeSlugBurrowBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugBurrowBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugBurrowBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBurrowBehaviour__Class>(type_info, "", "SneezeSlugBurrowBehaviour");
        }
        inline app::SneezeSlugBurrowBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugBurrowBehaviour>(get_class());
        }
    } // namespace SneezeSlugBurrowBehaviour
} // namespace app::classes::types
