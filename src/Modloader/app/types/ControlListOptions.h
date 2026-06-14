#pragma once
#include <Modloader/app/structs/ControlListOptions.h>
#include <Modloader/app/structs/ControlListOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlListOptions {
        inline app::ControlListOptions__Class** type_info() {
            static app::ControlListOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlListOptions__Class**)(modloader::win::memory::resolve_rva(0x0471B1D8));
            }
            return cache;
        }
        inline app::ControlListOptions__Class* get_class() {
            return il2cpp::get_class<app::ControlListOptions__Class>(type_info(), "", "ControlListOptions");
        }
        inline app::ControlListOptions* create() {
            return il2cpp::create_object<app::ControlListOptions>(get_class());
        }
    } // namespace ControlListOptions
} // namespace app::classes::types
