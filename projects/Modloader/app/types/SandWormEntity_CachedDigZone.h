#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormEntity_CachedDigZone__Class.h>
#include <Modloader/app/structs/SandWormEntity_CachedDigZone.h>
#include <Modloader/app/structs/SandWormEntity_CachedDigZone__Boxed.h>

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
