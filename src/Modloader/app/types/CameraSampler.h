#pragma once
#include <Modloader/app/structs/CameraSampler.h>
#include <Modloader/app/structs/CameraSampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSampler {
        inline app::CameraSampler__Class** type_info() {
            static app::CameraSampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraSampler__Class**)(modloader::win::memory::resolve_rva(0x0475B1F0));
            }
            return cache;
        }
        inline app::CameraSampler__Class* get_class() {
            return il2cpp::get_class<app::CameraSampler__Class>(type_info(), "Moon.ArtOptimization", "CameraSampler");
        }
        inline app::CameraSampler* create() {
            return il2cpp::create_object<app::CameraSampler>(get_class());
        }
    } // namespace CameraSampler
} // namespace app::classes::types
