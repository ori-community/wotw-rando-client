#pragma once
#include <Modloader/app/structs/SimpleCameraSampler.h>
#include <Modloader/app/structs/SimpleCameraSampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleCameraSampler {
        inline app::SimpleCameraSampler__Class** type_info() {
            static app::SimpleCameraSampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleCameraSampler__Class**)(modloader::win::memory::resolve_rva(0x047573A0));
            }
            return cache;
        }
        inline app::SimpleCameraSampler__Class* get_class() {
            return il2cpp::get_class<app::SimpleCameraSampler__Class>(type_info(), "Moon.HierarchyPerformanceTest", "SimpleCameraSampler");
        }
        inline app::SimpleCameraSampler* create() {
            return il2cpp::create_object<app::SimpleCameraSampler>(get_class());
        }
    } // namespace SimpleCameraSampler
} // namespace app::classes::types
