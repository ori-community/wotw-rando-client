#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManualResetEventSlim {
        inline app::ManualResetEventSlim__Class** type_info = (app::ManualResetEventSlim__Class**)(modloader::win::memory::resolve_rva(0x0473B8D0));
        inline app::ManualResetEventSlim__Class* get_class() {
            return il2cpp::get_class<app::ManualResetEventSlim__Class>(type_info, "System.Threading", "ManualResetEventSlim");
        }
        inline app::ManualResetEventSlim* create() {
            return il2cpp::create_object<app::ManualResetEventSlim>(get_class());
        }
    } // namespace ManualResetEventSlim
} // namespace app::classes::types
