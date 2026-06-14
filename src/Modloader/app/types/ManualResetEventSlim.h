#pragma once
#include <Modloader/app/structs/ManualResetEventSlim.h>
#include <Modloader/app/structs/ManualResetEventSlim__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManualResetEventSlim {
        inline app::ManualResetEventSlim__Class** type_info() {
            static app::ManualResetEventSlim__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ManualResetEventSlim__Class**)(modloader::win::memory::resolve_rva(0x0473B8D0));
            }
            return cache;
        }
        inline app::ManualResetEventSlim__Class* get_class() {
            return il2cpp::get_class<app::ManualResetEventSlim__Class>(type_info(), "System.Threading", "ManualResetEventSlim");
        }
        inline app::ManualResetEventSlim* create() {
            return il2cpp::create_object<app::ManualResetEventSlim>(get_class());
        }
    } // namespace ManualResetEventSlim
} // namespace app::classes::types
