#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseLoggingObject {
        inline app::BaseLoggingObject__Class** type_info = (app::BaseLoggingObject__Class**)(modloader::win::memory::resolve_rva(0x0477E5C0));
        inline app::BaseLoggingObject__Class* get_class() {
            return il2cpp::get_class<app::BaseLoggingObject__Class>(type_info, "System.Net", "BaseLoggingObject");
        }
        inline app::BaseLoggingObject* create() {
            return il2cpp::create_object<app::BaseLoggingObject>(get_class());
        }
    } // namespace BaseLoggingObject
} // namespace app::classes::types
