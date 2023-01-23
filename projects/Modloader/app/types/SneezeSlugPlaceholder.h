#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SneezeSlugPlaceholder__Class.h>
#include <Modloader/app/structs/SneezeSlugPlaceholder.h>

namespace app::classes::types {
    namespace SneezeSlugPlaceholder {
        namespace {
            inline app::SneezeSlugPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugPlaceholder__Class** type_info = &type_info_ref;
        inline app::SneezeSlugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugPlaceholder__Class>(type_info, "", "SneezeSlugPlaceholder");
        }
        inline app::SneezeSlugPlaceholder* create() {
            return il2cpp::create_object<app::SneezeSlugPlaceholder>(get_class());
        }
    } // namespace SneezeSlugPlaceholder
} // namespace app::classes::types
