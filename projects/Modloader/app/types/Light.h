#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Light {
        namespace {
            inline app::Light__Class* type_info_ref = nullptr;
        }
        inline app::Light__Class** type_info = &type_info_ref;
        inline app::Light__Class* get_class() {
            return il2cpp::get_class<app::Light__Class>(type_info, "UnityEngine", "Light");
        }
        inline app::Light* create() {
            return il2cpp::create_object<app::Light>(get_class());
        }
        inline app::Light__Array* create_array(int size) {
            return il2cpp::array_new<app::Light__Array>(get_class(), size);
        }
        inline app::Light__Array* create_array(const std::vector<app::Light*>& items) {
            return il2cpp::array_new<app::Light__Array>(get_class(), items);
        }
    } // namespace Light
} // namespace app::classes::types
