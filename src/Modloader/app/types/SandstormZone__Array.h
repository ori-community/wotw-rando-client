#pragma once
#include <Modloader/app/structs/SandstormZone__Array.h>
#include <Modloader/app/structs/SandstormZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandstormZone__Array {
        inline app::SandstormZone__Array__Class** type_info() {
            static app::SandstormZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandstormZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandstormZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SandstormZone__Array__Class>(type_info(), "", "SandstormZone[]");
        }
        inline app::SandstormZone__Array* create() {
            return il2cpp::create_object<app::SandstormZone__Array>(get_class());
        }
    } // namespace SandstormZone__Array
} // namespace app::classes::types
