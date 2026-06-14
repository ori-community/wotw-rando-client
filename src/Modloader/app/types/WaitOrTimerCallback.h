#pragma once
#include <Modloader/app/structs/WaitOrTimerCallback.h>
#include <Modloader/app/structs/WaitOrTimerCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitOrTimerCallback {
        inline app::WaitOrTimerCallback__Class** type_info() {
            static app::WaitOrTimerCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitOrTimerCallback__Class**)(modloader::win::memory::resolve_rva(0x04724F30));
            }
            return cache;
        }
        inline app::WaitOrTimerCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitOrTimerCallback__Class>(type_info(), "System.Threading", "WaitOrTimerCallback");
        }
        inline app::WaitOrTimerCallback* create() {
            return il2cpp::create_object<app::WaitOrTimerCallback>(get_class());
        }
    } // namespace WaitOrTimerCallback
} // namespace app::classes::types
