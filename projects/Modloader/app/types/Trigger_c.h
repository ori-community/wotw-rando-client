#pragma once
#include <Modloader/app/structs/Trigger_c.h>
#include <Modloader/app/structs/Trigger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trigger_c {
        inline app::Trigger_c__Class** type_info() {
            static app::Trigger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Trigger_c__Class**)(modloader::win::memory::resolve_rva(0x0471D760));
            }
            return cache;
        }
        inline app::Trigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Trigger_c__Class>(type_info(), "", "Trigger", "<>c");
        }
        inline app::Trigger_c* create() {
            return il2cpp::create_object<app::Trigger_c>(get_class());
        }
    } // namespace Trigger_c
} // namespace app::classes::types
