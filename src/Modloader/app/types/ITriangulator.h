#pragma once
#include <Modloader/app/structs/ITriangulator.h>
#include <Modloader/app/structs/ITriangulator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITriangulator {
        inline app::ITriangulator__Class** type_info() {
            static app::ITriangulator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITriangulator__Class**)(modloader::win::memory::resolve_rva(0x0470D678));
            }
            return cache;
        }
        inline app::ITriangulator__Class* get_class() {
            return il2cpp::get_class<app::ITriangulator__Class>(type_info(), "TriangleNet.Meshing", "ITriangulator");
        }
    } // namespace ITriangulator
} // namespace app::classes::types
