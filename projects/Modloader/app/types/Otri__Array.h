#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Otri__Array {
        inline app::Otri__Array__Class** type_info = (app::Otri__Array__Class**)(modloader::win::memory::resolve_rva(0x04763D30));
        inline app::Otri__Array__Class* get_class() {
            return il2cpp::get_class<app::Otri__Array__Class>(type_info, "TriangleNet.Topology", "Otri[]");
        }
        inline app::Otri__Array* create() {
            return il2cpp::create_object<app::Otri__Array>(get_class());
        }
    } // namespace Otri__Array
} // namespace app::classes::types
