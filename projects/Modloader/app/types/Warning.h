#pragma once
#include <Modloader/app/structs/Warning.h>
#include <Modloader/app/structs/Warning__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Warning {
        inline app::Warning__Class** type_info() {
            static app::Warning__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Warning__Class**)(modloader::win::memory::resolve_rva(0x04774F90));
            }
            return cache;
        }
        inline app::Warning__Class* get_class() {
            return il2cpp::get_class<app::Warning__Class>(type_info(), "RootMotion", "Warning");
        }
        inline app::Warning* create() {
            return il2cpp::create_object<app::Warning>(get_class());
        }
    } // namespace Warning
} // namespace app::classes::types
