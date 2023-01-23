#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebConnectionData__Class.h>
#include <Modloader/app/structs/WebConnectionData.h>

namespace app::classes::types {
    namespace WebConnectionData {
        inline app::WebConnectionData__Class** type_info = (app::WebConnectionData__Class**)(modloader::win::memory::resolve_rva(0x0477E9D8));
        inline app::WebConnectionData__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionData__Class>(type_info, "System.Net", "WebConnectionData");
        }
        inline app::WebConnectionData* create() {
            return il2cpp::create_object<app::WebConnectionData>(get_class());
        }
    } // namespace WebConnectionData
} // namespace app::classes::types
