#pragma once
#include <Modloader/app/structs/UberStateData__Array.h>
#include <Modloader/app/structs/UberStateData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateData__Array {
        inline app::UberStateData__Array__Class** type_info() {
            static app::UberStateData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateData__Array__Class>(type_info(), "Moon.UberStateVisualization", "UberStateData[]");
        }
        inline app::UberStateData__Array* create() {
            return il2cpp::create_object<app::UberStateData__Array>(get_class());
        }
    } // namespace UberStateData__Array
} // namespace app::classes::types
