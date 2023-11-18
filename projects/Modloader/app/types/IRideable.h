#pragma once
#include <Modloader/app/structs/IRideable.h>
#include <Modloader/app/structs/IRideable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRideable {
        inline app::IRideable__Class** type_info() {
            static app::IRideable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRideable__Class**)(modloader::win::memory::resolve_rva(0x047874D0));
            }
            return cache;
        }
        inline app::IRideable__Class* get_class() {
            return il2cpp::get_class<app::IRideable__Class>(type_info(), "", "IRideable");
        }
    } // namespace IRideable
} // namespace app::classes::types
