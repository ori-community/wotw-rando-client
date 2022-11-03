#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeekerSlugShootingState {
        namespace {
            inline app::SeekerSlugShootingState__Class* type_info_ref = nullptr;
        }
        inline app::SeekerSlugShootingState__Class** type_info = &type_info_ref;
        inline app::SeekerSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::SeekerSlugShootingState__Class>(type_info, "", "SeekerSlugShootingState");
        }
        inline app::SeekerSlugShootingState* create() {
            return il2cpp::create_object<app::SeekerSlugShootingState>(get_class());
        }
    } // namespace SeekerSlugShootingState
} // namespace app::classes::types
