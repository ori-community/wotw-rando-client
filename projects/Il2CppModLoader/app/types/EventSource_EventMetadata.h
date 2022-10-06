#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSource_EventMetadata {
        namespace {
            app::EventSource_EventMetadata__Class* type_info_ref = nullptr;
        }
        app::EventSource_EventMetadata__Class** type_info = &type_info_ref;
        inline app::EventSource_EventMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_EventMetadata__Class>(type_info, "System.Diagnostics.Tracing", "EventSource", "EventMetadata");
        }
        inline app::EventSource_EventMetadata* create() {
            return il2cpp::create_object<app::EventSource_EventMetadata>(get_class());
        }
        inline app::EventSource_EventMetadata__Boxed* box(app::EventSource_EventMetadata value) {
            return il2cpp::box_value<app::EventSource_EventMetadata__Boxed>(get_class(), value);
        }
        inline app::EventSource_EventMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::EventSource_EventMetadata__Array>(get_class(), size);
        }
        inline app::EventSource_EventMetadata__Array* create_array(const std::vector<app::EventSource_EventMetadata__Boxed>& items) {
            return il2cpp::array_new<app::EventSource_EventMetadata__Array>(get_class(), items);
        }
    } // namespace EventSource_EventMetadata
} // namespace app::classes::types
