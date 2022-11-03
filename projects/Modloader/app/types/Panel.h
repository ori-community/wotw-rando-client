#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Panel {
        namespace {
            inline app::Panel__Class* type_info_ref = nullptr;
        }
        inline app::Panel__Class** type_info = &type_info_ref;
        inline app::Panel__Class* get_class() {
            return il2cpp::get_class<app::Panel__Class>(type_info, "", "Panel");
        }
        inline app::Panel* create() {
            return il2cpp::create_object<app::Panel>(get_class());
        }
        inline app::Panel__Array* create_array(int size) {
            return il2cpp::array_new<app::Panel__Array>(get_class(), size);
        }
        inline app::Panel__Array* create_array(const std::vector<app::Panel*>& items) {
            return il2cpp::array_new<app::Panel__Array>(get_class(), items);
        }
    } // namespace Panel
} // namespace app::classes::types
