#pragma once
#include <Modloader/app/structs/Promise_c_DisplayClass45_0.h>
#include <Modloader/app/structs/Promise_c_DisplayClass45_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Promise_c_DisplayClass45_0 {
        inline app::Promise_c_DisplayClass45_0__Class** type_info() {
            static app::Promise_c_DisplayClass45_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Promise_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x0478F2E8));
            }
            return cache;
        }
        inline app::Promise_c_DisplayClass45_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_c_DisplayClass45_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Promise", "<>c__DisplayClass45_0");
        }
        inline app::Promise_c_DisplayClass45_0* create() {
            return il2cpp::create_object<app::Promise_c_DisplayClass45_0>(get_class());
        }
    } // namespace Promise_c_DisplayClass45_0
} // namespace app::classes::types
