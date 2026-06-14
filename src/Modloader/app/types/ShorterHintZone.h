#pragma once
#include <Modloader/app/structs/ShorterHintZone.h>
#include <Modloader/app/structs/ShorterHintZone__Array.h>
#include <Modloader/app/structs/ShorterHintZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShorterHintZone {
        inline app::ShorterHintZone__Class** type_info() {
            static app::ShorterHintZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShorterHintZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShorterHintZone__Class* get_class() {
            return il2cpp::get_class<app::ShorterHintZone__Class>(type_info(), "", "ShorterHintZone");
        }
        inline app::ShorterHintZone* create() {
            return il2cpp::create_object<app::ShorterHintZone>(get_class());
        }
        inline app::ShorterHintZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ShorterHintZone__Array>(get_class(), size);
        }
        inline app::ShorterHintZone__Array* create_array(const std::vector<app::ShorterHintZone*>& items) {
            return il2cpp::array_new<app::ShorterHintZone__Array>(get_class(), items);
        }
    } // namespace ShorterHintZone
} // namespace app::classes::types
