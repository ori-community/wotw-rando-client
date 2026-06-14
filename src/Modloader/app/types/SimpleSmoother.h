#pragma once
#include <Modloader/app/structs/SimpleSmoother.h>
#include <Modloader/app/structs/SimpleSmoother__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSmoother {
        inline app::SimpleSmoother__Class** type_info() {
            static app::SimpleSmoother__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSmoother__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSmoother__Class* get_class() {
            return il2cpp::get_class<app::SimpleSmoother__Class>(type_info(), "TriangleNet.Smoothing", "SimpleSmoother");
        }
        inline app::SimpleSmoother* create() {
            return il2cpp::create_object<app::SimpleSmoother>(get_class());
        }
    } // namespace SimpleSmoother
} // namespace app::classes::types
