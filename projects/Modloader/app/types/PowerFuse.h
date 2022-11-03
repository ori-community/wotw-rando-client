#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PowerFuse {
        namespace {
            inline app::PowerFuse__Class* type_info_ref = nullptr;
        }
        inline app::PowerFuse__Class** type_info = &type_info_ref;
        inline app::PowerFuse__Class* get_class() {
            return il2cpp::get_class<app::PowerFuse__Class>(type_info, "", "PowerFuse");
        }
        inline app::PowerFuse* create() {
            return il2cpp::create_object<app::PowerFuse>(get_class());
        }
        inline app::PowerFuse__Array* create_array(int size) {
            return il2cpp::array_new<app::PowerFuse__Array>(get_class(), size);
        }
        inline app::PowerFuse__Array* create_array(const std::vector<app::PowerFuse*>& items) {
            return il2cpp::array_new<app::PowerFuse__Array>(get_class(), items);
        }
    } // namespace PowerFuse
} // namespace app::classes::types
