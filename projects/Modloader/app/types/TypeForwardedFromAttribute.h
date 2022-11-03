#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeForwardedFromAttribute {
        inline app::TypeForwardedFromAttribute__Class** type_info = (app::TypeForwardedFromAttribute__Class**)(modloader::win::memory::resolve_rva(0x04775E80));
        inline app::TypeForwardedFromAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeForwardedFromAttribute__Class>(type_info, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
        }
        inline app::TypeForwardedFromAttribute* create() {
            return il2cpp::create_object<app::TypeForwardedFromAttribute>(get_class());
        }
    } // namespace TypeForwardedFromAttribute
} // namespace app::classes::types
