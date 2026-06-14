#pragma once
#include <Modloader/app/structs/MicroProfiler_Timer__Array.h>
#include <Modloader/app/structs/MicroProfiler_Timer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_Timer__Array {
        inline app::MicroProfiler_Timer__Array__Class** type_info() {
            static app::MicroProfiler_Timer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfiler_Timer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfiler_Timer__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_Timer__Array__Class>(type_info(), "", "MicroProfiler+Timer[]");
        }
        inline app::MicroProfiler_Timer__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_Timer__Array>(get_class());
        }
    } // namespace MicroProfiler_Timer__Array
} // namespace app::classes::types
