#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LimitedLifetime {
        namespace {
            inline app::LimitedLifetime__Class* type_info_ref = nullptr;
        }
        inline app::LimitedLifetime__Class** type_info = &type_info_ref;
        inline app::LimitedLifetime__Class* get_class() {
            return il2cpp::get_class<app::LimitedLifetime__Class>(type_info, "", "LimitedLifetime");
        }
        inline app::LimitedLifetime* create() {
            return il2cpp::create_object<app::LimitedLifetime>(get_class());
        }
        inline app::LimitedLifetime__Array* create_array(int size) {
            return il2cpp::array_new<app::LimitedLifetime__Array>(get_class(), size);
        }
        inline app::LimitedLifetime__Array* create_array(const std::vector<app::LimitedLifetime*>& items) {
            return il2cpp::array_new<app::LimitedLifetime__Array>(get_class(), items);
        }
    } // namespace LimitedLifetime
} // namespace app::classes::types
