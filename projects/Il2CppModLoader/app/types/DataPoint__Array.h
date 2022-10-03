#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataPoint__Array {
        namespace {
            app::DataPoint__Array__Class* type_info_ref = nullptr;
        }
        app::DataPoint__Array__Class** type_info = &type_info_ref;
        inline app::DataPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::DataPoint__Array__Class>(type_info, "Moon.Telemetry", "DataPoint[]");
        }
        inline app::DataPoint__Array* create() {
            return il2cpp::create_object<app::DataPoint__Array>(get_class());
        }
    } // namespace DataPoint__Array
} // namespace app::classes::types
