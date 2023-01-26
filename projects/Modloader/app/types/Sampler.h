#pragma once
#include <Modloader/app/structs/Sampler.h>
#include <Modloader/app/structs/Sampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sampler {
        inline app::Sampler__Class** type_info() {
            static app::Sampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Sampler__Class**)(modloader::win::memory::resolve_rva(0x04710060));
            }
            return cache;
        }
        inline app::Sampler__Class* get_class() {
            return il2cpp::get_class<app::Sampler__Class>(type_info(), "UnityEngine.Profiling", "Sampler");
        }
        inline app::Sampler* create() {
            return il2cpp::create_object<app::Sampler>(get_class());
        }
    } // namespace Sampler
} // namespace app::classes::types
