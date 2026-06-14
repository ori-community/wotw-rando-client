#pragma once
#include <Modloader/app/structs/CameraSampler_c.h>
#include <Modloader/app/structs/CameraSampler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSampler_c {
        inline app::CameraSampler_c__Class** type_info() {
            static app::CameraSampler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraSampler_c__Class**)(modloader::win::memory::resolve_rva(0x0474F2D0));
            }
            return cache;
        }
        inline app::CameraSampler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSampler_c__Class>(type_info(), "Moon.ArtOptimization", "CameraSampler", "<>c");
        }
        inline app::CameraSampler_c* create() {
            return il2cpp::create_object<app::CameraSampler_c>(get_class());
        }
    } // namespace CameraSampler_c
} // namespace app::classes::types
