#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NanoProfiler {
        inline app::NanoProfiler__Class** type_info = (app::NanoProfiler__Class**)(modloader::win::memory::resolve_rva(0x04700EC8));
        inline app::NanoProfiler__Class* get_class() {
            return il2cpp::get_class<app::NanoProfiler__Class>(type_info, "Moon.nanoProfiler", "NanoProfiler");
        }
        inline app::NanoProfiler* create() {
            return il2cpp::create_object<app::NanoProfiler>(get_class());
        }
    } // namespace NanoProfiler
} // namespace app::classes::types
