#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataBundle {
        inline app::DataBundle__Class** type_info = (app::DataBundle__Class**)(modloader::win::memory::resolve_rva(0x04757028));
        inline app::DataBundle__Class* get_class() {
            return il2cpp::get_class<app::DataBundle__Class>(type_info, "Moon.Telemetry.Performance", "DataBundle");
        }
        inline app::DataBundle* create() {
            return il2cpp::create_object<app::DataBundle>(get_class());
        }
    } // namespace DataBundle
} // namespace app::classes::types
