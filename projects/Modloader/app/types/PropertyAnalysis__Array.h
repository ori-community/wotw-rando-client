#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PropertyAnalysis__Array__Class.h>
#include <Modloader/app/structs/PropertyAnalysis__Array.h>

namespace app::classes::types {
    namespace PropertyAnalysis__Array {
        namespace {
            inline app::PropertyAnalysis__Array__Class* type_info_ref = nullptr;
        }
        inline app::PropertyAnalysis__Array__Class** type_info = &type_info_ref;
        inline app::PropertyAnalysis__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAnalysis__Array__Class>(type_info, "System.Diagnostics.Tracing", "PropertyAnalysis[]");
        }
        inline app::PropertyAnalysis__Array* create() {
            return il2cpp::create_object<app::PropertyAnalysis__Array>(get_class());
        }
    } // namespace PropertyAnalysis__Array
} // namespace app::classes::types
