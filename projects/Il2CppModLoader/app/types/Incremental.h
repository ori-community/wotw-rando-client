#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Incremental {
        namespace {
            inline app::Incremental__Class* type_info_ref = nullptr;
        }
        inline app::Incremental__Class** type_info = &type_info_ref;
        inline app::Incremental__Class* get_class() {
            return il2cpp::get_class<app::Incremental__Class>(type_info, "TriangleNet.Meshing.Algorithm", "Incremental");
        }
        inline app::Incremental* create() {
            return il2cpp::create_object<app::Incremental>(get_class());
        }
    } // namespace Incremental
} // namespace app::classes::types
