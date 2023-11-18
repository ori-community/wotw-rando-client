#pragma once
#include <Modloader/app/structs/BlitTriExtensions.h>
#include <Modloader/app/structs/BlitTriExtensions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlitTriExtensions {
        inline app::BlitTriExtensions__Class** type_info() {
            static app::BlitTriExtensions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlitTriExtensions__Class**)(modloader::win::memory::resolve_rva(0x0471F510));
            }
            return cache;
        }
        inline app::BlitTriExtensions__Class* get_class() {
            return il2cpp::get_class<app::BlitTriExtensions__Class>(type_info(), "", "BlitTriExtensions");
        }
        inline app::BlitTriExtensions* create() {
            return il2cpp::create_object<app::BlitTriExtensions>(get_class());
        }
    } // namespace BlitTriExtensions
} // namespace app::classes::types
