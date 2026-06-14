#pragma once
#include <Modloader/app/structs/HammerTrail_TrailPoint__Array.h>
#include <Modloader/app/structs/HammerTrail_TrailPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerTrail_TrailPoint__Array {
        inline app::HammerTrail_TrailPoint__Array__Class** type_info() {
            static app::HammerTrail_TrailPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HammerTrail_TrailPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04765F90));
            }
            return cache;
        }
        inline app::HammerTrail_TrailPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::HammerTrail_TrailPoint__Array__Class>(type_info(), "", "HammerTrail+TrailPoint[]");
        }
        inline app::HammerTrail_TrailPoint__Array* create() {
            return il2cpp::create_object<app::HammerTrail_TrailPoint__Array>(get_class());
        }
    } // namespace HammerTrail_TrailPoint__Array
} // namespace app::classes::types
