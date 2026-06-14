#pragma once
#include <Modloader/app/structs/FXAA_1.h>
#include <Modloader/app/structs/FXAA_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_1 {
        inline app::FXAA_1__Class** type_info() {
            static app::FXAA_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FXAA_1__Class**)(modloader::win::memory::resolve_rva(0x0474C2A8));
            }
            return cache;
        }
        inline app::FXAA_1__Class* get_class() {
            return il2cpp::get_class<app::FXAA_1__Class>(type_info(), "Moon.Rendering", "FXAA");
        }
        inline app::FXAA_1* create() {
            return il2cpp::create_object<app::FXAA_1>(get_class());
        }
    } // namespace FXAA_1
} // namespace app::classes::types
