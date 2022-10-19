#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BadTriQueue {
        inline app::BadTriQueue__Class** type_info = (app::BadTriQueue__Class**)(modloader::win::memory::resolve_rva(0x04755B88));
        inline app::BadTriQueue__Class* get_class() {
            return il2cpp::get_class<app::BadTriQueue__Class>(type_info, "TriangleNet.Meshing.Data", "BadTriQueue");
        }
        inline app::BadTriQueue* create() {
            return il2cpp::create_object<app::BadTriQueue>(get_class());
        }
    } // namespace BadTriQueue
} // namespace app::classes::types
