#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataResolver {
        inline app::DynamicDataResolver__Class** type_info = (app::DynamicDataResolver__Class**)(modloader::win::memory::resolve_rva(0x04752C90));
        inline app::DynamicDataResolver__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataResolver__Class>(type_info, "Moon", "DynamicDataResolver");
        }
        inline app::DynamicDataResolver* create() {
            return il2cpp::create_object<app::DynamicDataResolver>(get_class());
        }
    } // namespace DynamicDataResolver
} // namespace app::classes::types
