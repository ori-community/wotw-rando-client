#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventFieldAttribute {
        namespace {
            app::EventFieldAttribute__Class* type_info_ref = nullptr;
        }
        app::EventFieldAttribute__Class** type_info = &type_info_ref;
        inline app::EventFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventFieldAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventFieldAttribute");
        }
        inline app::EventFieldAttribute* create() {
            return il2cpp::create_object<app::EventFieldAttribute>(get_class());
        }
    } // namespace EventFieldAttribute
} // namespace app::classes::types
