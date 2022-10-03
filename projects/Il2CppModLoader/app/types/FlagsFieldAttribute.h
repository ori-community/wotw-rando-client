#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlagsFieldAttribute {
        namespace {
            app::FlagsFieldAttribute__Class* type_info_ref = nullptr;
        }
        app::FlagsFieldAttribute__Class** type_info = &type_info_ref;
        inline app::FlagsFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::FlagsFieldAttribute__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FlagsFieldAttribute");
        }
        inline app::FlagsFieldAttribute* create() {
            return il2cpp::create_object<app::FlagsFieldAttribute>(get_class());
        }
    } // namespace FlagsFieldAttribute
} // namespace app::classes::types
