#pragma once
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#include <Modloader/app/structs/DesiredUberStateGeneric__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateGeneric {
        inline app::DesiredUberStateGeneric__Class** type_info() {
            static app::DesiredUberStateGeneric__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesiredUberStateGeneric__Class**)(modloader::win::memory::resolve_rva(0x04759970));
            }
            return cache;
        }
        inline app::DesiredUberStateGeneric__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateGeneric__Class>(type_info(), "Moon", "DesiredUberStateGeneric");
        }
        inline app::DesiredUberStateGeneric* create() {
            return il2cpp::create_object<app::DesiredUberStateGeneric>(get_class());
        }
    } // namespace DesiredUberStateGeneric
} // namespace app::classes::types
