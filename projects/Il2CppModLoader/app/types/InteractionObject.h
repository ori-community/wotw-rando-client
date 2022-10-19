#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject {
        namespace {
            inline app::InteractionObject__Class* type_info_ref = nullptr;
        }
        inline app::InteractionObject__Class** type_info = &type_info_ref;
        inline app::InteractionObject__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject__Class>(type_info, "RootMotion.FinalIK", "InteractionObject");
        }
        inline app::InteractionObject* create() {
            return il2cpp::create_object<app::InteractionObject>(get_class());
        }
        inline app::InteractionObject__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject__Array>(get_class(), size);
        }
        inline app::InteractionObject__Array* create_array(const std::vector<app::InteractionObject*>& items) {
            return il2cpp::array_new<app::InteractionObject__Array>(get_class(), items);
        }
    } // namespace InteractionObject
} // namespace app::classes::types
