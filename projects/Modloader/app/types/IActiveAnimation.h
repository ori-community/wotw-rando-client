#pragma once
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/IActiveAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IActiveAnimation {
        inline app::IActiveAnimation__Class** type_info() {
            static app::IActiveAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IActiveAnimation__Class**)(modloader::win::memory::resolve_rva(0x0475ED30));
            }
            return cache;
        }
        inline app::IActiveAnimation__Class* get_class() {
            return il2cpp::get_class<app::IActiveAnimation__Class>(type_info(), "Moon", "IActiveAnimation");
        }
    } // namespace IActiveAnimation
} // namespace app::classes::types
