#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_Initial {
        inline app::X520_Initial__Class** type_info = (app::X520_Initial__Class**)(modloader::win::memory::resolve_rva(0x0474A170));
        inline app::X520_Initial__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Initial__Class>(type_info, "Mono.Security.X509", "X520", "Initial");
        }
        inline app::X520_Initial* create() {
            return il2cpp::create_object<app::X520_Initial>(get_class());
        }
    } // namespace X520_Initial
} // namespace app::classes::types
