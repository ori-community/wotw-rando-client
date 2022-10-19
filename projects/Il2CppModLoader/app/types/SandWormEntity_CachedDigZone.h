#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity_CachedDigZone {
        namespace {
            inline app::SandWormEntity_CachedDigZone__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_CachedDigZone__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_CachedDigZone__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_CachedDigZone__Class>(type_info, "", "SandWormEntity", "CachedDigZone");
        }
        inline app::SandWormEntity_CachedDigZone* create() {
            return il2cpp::create_object<app::SandWormEntity_CachedDigZone>(get_class());
        }
        inline app::SandWormEntity_CachedDigZone__Boxed* box(app::SandWormEntity_CachedDigZone value) {
            return il2cpp::box_value<app::SandWormEntity_CachedDigZone__Boxed>(get_class(), value);
        }
    } // namespace SandWormEntity_CachedDigZone
} // namespace app::classes::types
