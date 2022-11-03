#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShorterHintZone {
        namespace {
            inline app::ShorterHintZone__Class* type_info_ref = nullptr;
        }
        inline app::ShorterHintZone__Class** type_info = &type_info_ref;
        inline app::ShorterHintZone__Class* get_class() {
            return il2cpp::get_class<app::ShorterHintZone__Class>(type_info, "", "ShorterHintZone");
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
