#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TplEtwProvider {
        inline app::TplEtwProvider__Class** type_info = (app::TplEtwProvider__Class**)(modloader::win::memory::resolve_rva(0x04793E08));
        inline app::TplEtwProvider__Class* get_class() {
            return il2cpp::get_class<app::TplEtwProvider__Class>(type_info, "System.Diagnostics.Tracing", "TplEtwProvider");
        }
        inline app::TplEtwProvider* create() {
            return il2cpp::create_object<app::TplEtwProvider>(get_class());
        }
    } // namespace TplEtwProvider
} // namespace app::classes::types
