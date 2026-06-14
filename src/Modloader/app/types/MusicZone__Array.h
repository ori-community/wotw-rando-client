#pragma once
#include <Modloader/app/structs/MusicZone__Array.h>
#include <Modloader/app/structs/MusicZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicZone__Array {
        inline app::MusicZone__Array__Class** type_info() {
            static app::MusicZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicZone__Array__Class* get_class() {
            return il2cpp::get_class<app::MusicZone__Array__Class>(type_info(), "", "MusicZone[]");
        }
        inline app::MusicZone__Array* create() {
            return il2cpp::create_object<app::MusicZone__Array>(get_class());
        }
    } // namespace MusicZone__Array
} // namespace app::classes::types
