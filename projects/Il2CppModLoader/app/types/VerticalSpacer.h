#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer {
        namespace {
            app::VerticalSpacer__Class* type_info_ref = nullptr;
        }
        app::VerticalSpacer__Class** type_info = &type_info_ref;
        inline app::VerticalSpacer__Class* get_class() {
            return il2cpp::get_class<app::VerticalSpacer__Class>(type_info, "", "VerticalSpacer");
        }
        inline app::VerticalSpacer* create() {
            return il2cpp::create_object<app::VerticalSpacer>(get_class());
        }
    } // namespace VerticalSpacer
} // namespace app::classes::types
