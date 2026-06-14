#pragma once
#include <Modloader/app/structs/TypeAnalysis.h>
#include <Modloader/app/structs/TypeAnalysis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeAnalysis {
        inline app::TypeAnalysis__Class** type_info() {
            static app::TypeAnalysis__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeAnalysis__Class**)(modloader::win::memory::resolve_rva(0x04733258));
            }
            return cache;
        }
        inline app::TypeAnalysis__Class* get_class() {
            return il2cpp::get_class<app::TypeAnalysis__Class>(type_info(), "System.Diagnostics.Tracing", "TypeAnalysis");
        }
        inline app::TypeAnalysis* create() {
            return il2cpp::create_object<app::TypeAnalysis>(get_class());
        }
    } // namespace TypeAnalysis
} // namespace app::classes::types
