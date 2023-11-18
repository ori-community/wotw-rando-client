#pragma once
#include <Modloader/app/structs/PathTracerOutput.h>
#include <Modloader/app/structs/PathTracerOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathTracerOutput {
        inline app::PathTracerOutput__Class** type_info() {
            static app::PathTracerOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathTracerOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathTracerOutput__Class* get_class() {
            return il2cpp::get_class<app::PathTracerOutput__Class>(type_info(), "", "PathTracerOutput");
        }
        inline app::PathTracerOutput* create() {
            return il2cpp::create_object<app::PathTracerOutput>(get_class());
        }
    } // namespace PathTracerOutput
} // namespace app::classes::types
