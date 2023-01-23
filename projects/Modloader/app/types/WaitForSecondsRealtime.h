#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitForSecondsRealtime__Class.h>
#include <Modloader/app/structs/WaitForSecondsRealtime.h>

namespace app::classes::types {
    namespace WaitForSecondsRealtime {
        inline app::WaitForSecondsRealtime__Class** type_info = (app::WaitForSecondsRealtime__Class**)(modloader::win::memory::resolve_rva(0x0474BE78));
        inline app::WaitForSecondsRealtime__Class* get_class() {
            return il2cpp::get_class<app::WaitForSecondsRealtime__Class>(type_info, "UnityEngine", "WaitForSecondsRealtime");
        }
        inline app::WaitForSecondsRealtime* create() {
            return il2cpp::create_object<app::WaitForSecondsRealtime>(get_class());
        }
    } // namespace WaitForSecondsRealtime
} // namespace app::classes::types
