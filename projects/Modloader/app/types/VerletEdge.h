#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletEdge__Class.h>
#include <Modloader/app/structs/VerletEdge.h>
#include <Modloader/app/structs/VerletEdge__Array.h>

namespace app::classes::types {
    namespace VerletEdge {
        inline app::VerletEdge__Class** type_info = (app::VerletEdge__Class**)(modloader::win::memory::resolve_rva(0x0470DB20));
        inline app::VerletEdge__Class* get_class() {
            return il2cpp::get_class<app::VerletEdge__Class>(type_info, "", "VerletEdge");
        }
        inline app::VerletEdge* create() {
            return il2cpp::create_object<app::VerletEdge>(get_class());
        }
        inline app::VerletEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletEdge__Array>(get_class(), size);
        }
        inline app::VerletEdge__Array* create_array(const std::vector<app::VerletEdge*>& items) {
            return il2cpp::array_new<app::VerletEdge__Array>(get_class(), items);
        }
    } // namespace VerletEdge
} // namespace app::classes::types
