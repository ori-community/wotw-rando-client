#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseInput {
        namespace {
            inline app::BaseInput__Class* type_info_ref = nullptr;
        }
        inline app::BaseInput__Class** type_info = &type_info_ref;
        inline app::BaseInput__Class* get_class() {
            return il2cpp::get_class<app::BaseInput__Class>(type_info, "UnityEngine.EventSystems", "BaseInput");
        }
        inline app::BaseInput* create() {
            return il2cpp::create_object<app::BaseInput>(get_class());
        }
        inline app::BaseInput__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInput__Array>(get_class(), size);
        }
        inline app::BaseInput__Array* create_array(const std::vector<app::BaseInput*>& items) {
            return il2cpp::array_new<app::BaseInput__Array>(get_class(), items);
        }
    } // namespace BaseInput
} // namespace app::classes::types
