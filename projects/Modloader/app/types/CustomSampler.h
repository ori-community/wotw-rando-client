#pragma once
#include <Modloader/app/structs/CustomSampler.h>
#include <Modloader/app/structs/CustomSampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomSampler {
        inline app::CustomSampler__Class** type_info() {
            static app::CustomSampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomSampler__Class**)(modloader::win::memory::resolve_rva(0x04783640));
            }
            return cache;
        }
        inline app::CustomSampler__Class* get_class() {
            return il2cpp::get_class<app::CustomSampler__Class>(type_info(), "UnityEngine.Profiling", "CustomSampler");
        }
        inline app::CustomSampler* create() {
            return il2cpp::create_object<app::CustomSampler>(get_class());
        }
    } // namespace CustomSampler
} // namespace app::classes::types
