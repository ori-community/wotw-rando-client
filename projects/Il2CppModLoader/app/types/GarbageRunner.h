#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GarbageRunner {
        inline app::GarbageRunner__Class** type_info = (app::GarbageRunner__Class**)(modloader::win::memory::resolve_rva(0x047124F0));
        inline app::GarbageRunner__Class* get_class() {
            return il2cpp::get_class<app::GarbageRunner__Class>(type_info, "", "GarbageRunner");
        }
        inline app::GarbageRunner* create() {
            return il2cpp::create_object<app::GarbageRunner>(get_class());
        }
    } // namespace GarbageRunner
} // namespace app::classes::types
