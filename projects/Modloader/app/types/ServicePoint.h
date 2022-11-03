#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServicePoint {
        inline app::ServicePoint__Class** type_info = (app::ServicePoint__Class**)(modloader::win::memory::resolve_rva(0x04707FB8));
        inline app::ServicePoint__Class* get_class() {
            return il2cpp::get_class<app::ServicePoint__Class>(type_info, "System.Net", "ServicePoint");
        }
        inline app::ServicePoint* create() {
            return il2cpp::create_object<app::ServicePoint>(get_class());
        }
    } // namespace ServicePoint
} // namespace app::classes::types
