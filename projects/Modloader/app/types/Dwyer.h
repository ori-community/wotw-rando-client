#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dwyer__Class.h>
#include <Modloader/app/structs/Dwyer.h>

namespace app::classes::types {
    namespace Dwyer {
        inline app::Dwyer__Class** type_info = (app::Dwyer__Class**)(modloader::win::memory::resolve_rva(0x04726298));
        inline app::Dwyer__Class* get_class() {
            return il2cpp::get_class<app::Dwyer__Class>(type_info, "TriangleNet.Meshing.Algorithm", "Dwyer");
        }
        inline app::Dwyer* create() {
            return il2cpp::create_object<app::Dwyer>(get_class());
        }
    } // namespace Dwyer
} // namespace app::classes::types
