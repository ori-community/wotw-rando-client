#pragma once
#include <Modloader/app/structs/ShorterHintZone__Array.h>
#include <Modloader/app/structs/ShorterHintZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShorterHintZone__Array {
        inline app::ShorterHintZone__Array__Class** type_info() {
            static app::ShorterHintZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShorterHintZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShorterHintZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ShorterHintZone__Array__Class>(type_info(), "", "ShorterHintZone[]");
        }
        inline app::ShorterHintZone__Array* create() {
            return il2cpp::create_object<app::ShorterHintZone__Array>(get_class());
        }
    } // namespace ShorterHintZone__Array
} // namespace app::classes::types
