#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleSampler {
        inline app::TriangleSampler__Class** type_info = (app::TriangleSampler__Class**)(modloader::win::memory::resolve_rva(0x04730F48));
        inline app::TriangleSampler__Class* get_class() {
            return il2cpp::get_class<app::TriangleSampler__Class>(type_info, "TriangleNet", "TriangleSampler");
        }
        inline app::TriangleSampler* create() {
            return il2cpp::create_object<app::TriangleSampler>(get_class());
        }
    } // namespace TriangleSampler
} // namespace app::classes::types
