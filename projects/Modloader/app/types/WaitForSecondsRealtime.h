#pragma once
#include <Modloader/app/structs/WaitForSecondsRealtime.h>
#include <Modloader/app/structs/WaitForSecondsRealtime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForSecondsRealtime {
        inline app::WaitForSecondsRealtime__Class** type_info() {
            static app::WaitForSecondsRealtime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitForSecondsRealtime__Class**)(modloader::win::memory::resolve_rva(0x0474BE78));
            }
            return cache;
        }
        inline app::WaitForSecondsRealtime__Class* get_class() {
            return il2cpp::get_class<app::WaitForSecondsRealtime__Class>(type_info(), "UnityEngine", "WaitForSecondsRealtime");
        }
        inline app::WaitForSecondsRealtime* create() {
            return il2cpp::create_object<app::WaitForSecondsRealtime>(get_class());
        }
    } // namespace WaitForSecondsRealtime
} // namespace app::classes::types
