#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_Timer__Array {
        namespace {
            app::MicroProfiler_Timer__Array__Class* type_info_ref = nullptr;
        }
        app::MicroProfiler_Timer__Array__Class** type_info = &type_info_ref;
        inline app::MicroProfiler_Timer__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_Timer__Array__Class>(type_info, "", "MicroProfiler+Timer[]");
        }
        inline app::MicroProfiler_Timer__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_Timer__Array>(get_class());
        }
    } // namespace MicroProfiler_Timer__Array
} // namespace app::classes::types
