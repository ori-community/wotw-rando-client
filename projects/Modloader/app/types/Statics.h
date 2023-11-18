#pragma once
#include <Modloader/app/structs/Statics.h>
#include <Modloader/app/structs/Statics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Statics {
        inline app::Statics__Class** type_info() {
            static app::Statics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Statics__Class**)(modloader::win::memory::resolve_rva(0x04758118));
            }
            return cache;
        }
        inline app::Statics__Class* get_class() {
            return il2cpp::get_class<app::Statics__Class>(type_info(), "System.Diagnostics.Tracing", "Statics");
        }
        inline app::Statics* create() {
            return il2cpp::create_object<app::Statics>(get_class());
        }
    } // namespace Statics
} // namespace app::classes::types
