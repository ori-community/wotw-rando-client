#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoremasterUISlot {
        namespace {
            app::LoremasterUISlot__Class* type_info_ref = nullptr;
        }
        app::LoremasterUISlot__Class** type_info = &type_info_ref;
        inline app::LoremasterUISlot__Class* get_class() {
            return il2cpp::get_class<app::LoremasterUISlot__Class>(type_info, "", "LoremasterUISlot");
        }
        inline app::LoremasterUISlot* create() {
            return il2cpp::create_object<app::LoremasterUISlot>(get_class());
        }
    } // namespace LoremasterUISlot
} // namespace app::classes::types
