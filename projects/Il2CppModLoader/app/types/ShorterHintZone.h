#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShorterHintZone {
        namespace {
            app::ShorterHintZone__Class* type_info_ref = nullptr;
        }
        app::ShorterHintZone__Class** type_info = &type_info_ref;
        inline app::ShorterHintZone__Class* get_class() {
            return il2cpp::get_class<app::ShorterHintZone__Class>(type_info, "", "ShorterHintZone");
        }
        inline app::ShorterHintZone* create() {
            return il2cpp::create_object<app::ShorterHintZone>(get_class());
        }
        inline app::ShorterHintZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ShorterHintZone__Array>(get_class(), size);
        }
    } // namespace ShorterHintZone
} // namespace app::classes::types
