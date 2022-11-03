#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitOrTimerCallback {
        inline app::WaitOrTimerCallback__Class** type_info = (app::WaitOrTimerCallback__Class**)(modloader::win::memory::resolve_rva(0x04724F30));
        inline app::WaitOrTimerCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitOrTimerCallback__Class>(type_info, "System.Threading", "WaitOrTimerCallback");
        }
        inline app::WaitOrTimerCallback* create() {
            return il2cpp::create_object<app::WaitOrTimerCallback>(get_class());
        }
    } // namespace WaitOrTimerCallback
} // namespace app::classes::types
