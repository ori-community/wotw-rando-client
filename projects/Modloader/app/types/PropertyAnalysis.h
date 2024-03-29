#pragma once
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/PropertyAnalysis__Array.h>
#include <Modloader/app/structs/PropertyAnalysis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyAnalysis {
        inline app::PropertyAnalysis__Class** type_info() {
            static app::PropertyAnalysis__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyAnalysis__Class**)(modloader::win::memory::resolve_rva(0x047643E0));
            }
            return cache;
        }
        inline app::PropertyAnalysis__Class* get_class() {
            return il2cpp::get_class<app::PropertyAnalysis__Class>(type_info(), "System.Diagnostics.Tracing", "PropertyAnalysis");
        }
        inline app::PropertyAnalysis* create() {
            return il2cpp::create_object<app::PropertyAnalysis>(get_class());
        }
        inline app::PropertyAnalysis__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyAnalysis__Array>(get_class(), size);
        }
        inline app::PropertyAnalysis__Array* create_array(const std::vector<app::PropertyAnalysis*>& items) {
            return il2cpp::array_new<app::PropertyAnalysis__Array>(get_class(), items);
        }
    } // namespace PropertyAnalysis
} // namespace app::classes::types
