#pragma once
#include <Modloader/app/structs/Wwise.h>
#include <Modloader/app/structs/Wwise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wwise {
        inline app::Wwise__Class** type_info() {
            static app::Wwise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Wwise__Class**)(modloader::win::memory::resolve_rva(0x04776290));
            }
            return cache;
        }
        inline app::Wwise__Class* get_class() {
            return il2cpp::get_class<app::Wwise__Class>(type_info(), "Moon.Wwise", "Wwise");
        }
        inline app::Wwise* create() {
            return il2cpp::create_object<app::Wwise>(get_class());
        }
    } // namespace Wwise
} // namespace app::classes::types
