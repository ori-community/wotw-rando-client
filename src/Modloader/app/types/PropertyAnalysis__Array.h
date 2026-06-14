#pragma once
#include <Modloader/app/structs/PropertyAnalysis__Array.h>
#include <Modloader/app/structs/PropertyAnalysis__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyAnalysis__Array {
        inline app::PropertyAnalysis__Array__Class** type_info() {
            static app::PropertyAnalysis__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyAnalysis__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyAnalysis__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAnalysis__Array__Class>(type_info(), "System.Diagnostics.Tracing", "PropertyAnalysis[]");
        }
        inline app::PropertyAnalysis__Array* create() {
            return il2cpp::create_object<app::PropertyAnalysis__Array>(get_class());
        }
    } // namespace PropertyAnalysis__Array
} // namespace app::classes::types
