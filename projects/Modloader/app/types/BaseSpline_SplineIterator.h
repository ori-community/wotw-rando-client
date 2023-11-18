#pragma once
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/BaseSpline_SplineIterator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplineIterator {
        inline app::BaseSpline_SplineIterator__Class** type_info() {
            static app::BaseSpline_SplineIterator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseSpline_SplineIterator__Class**)(modloader::win::memory::resolve_rva(0x04729388));
            }
            return cache;
        }
        inline app::BaseSpline_SplineIterator__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineIterator__Class>(type_info(), "", "BaseSpline", "SplineIterator");
        }
        inline app::BaseSpline_SplineIterator* create() {
            return il2cpp::create_object<app::BaseSpline_SplineIterator>(get_class());
        }
    } // namespace BaseSpline_SplineIterator
} // namespace app::classes::types
