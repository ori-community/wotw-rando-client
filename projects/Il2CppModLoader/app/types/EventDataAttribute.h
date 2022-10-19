#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDataAttribute {
        namespace {
            inline app::EventDataAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EventDataAttribute__Class** type_info = &type_info_ref;
        inline app::EventDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventDataAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventDataAttribute");
        }
        inline app::EventDataAttribute* create() {
            return il2cpp::create_object<app::EventDataAttribute>(get_class());
        }
    } // namespace EventDataAttribute
} // namespace app::classes::types
