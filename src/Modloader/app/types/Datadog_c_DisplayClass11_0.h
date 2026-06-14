#pragma once
#include <Modloader/app/structs/Datadog_c_DisplayClass11_0.h>
#include <Modloader/app/structs/Datadog_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datadog_c_DisplayClass11_0 {
        inline app::Datadog_c_DisplayClass11_0__Class** type_info() {
            static app::Datadog_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datadog_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04799F20));
            }
            return cache;
        }
        inline app::Datadog_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Datadog_c_DisplayClass11_0__Class>(type_info(), "", "Datadog", "<>c__DisplayClass11_0");
        }
        inline app::Datadog_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::Datadog_c_DisplayClass11_0>(get_class());
        }
    } // namespace Datadog_c_DisplayClass11_0
} // namespace app::classes::types
