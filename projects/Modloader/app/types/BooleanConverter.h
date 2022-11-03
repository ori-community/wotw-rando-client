#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanConverter {
        inline app::BooleanConverter__Class** type_info = (app::BooleanConverter__Class**)(modloader::win::memory::resolve_rva(0x04769690));
        inline app::BooleanConverter__Class* get_class() {
            return il2cpp::get_class<app::BooleanConverter__Class>(type_info, "System.ComponentModel", "BooleanConverter");
        }
        inline app::BooleanConverter* create() {
            return il2cpp::create_object<app::BooleanConverter>(get_class());
        }
    } // namespace BooleanConverter
} // namespace app::classes::types
