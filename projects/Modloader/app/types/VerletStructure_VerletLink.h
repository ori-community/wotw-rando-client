#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_VerletLink {
        inline app::VerletStructure_VerletLink__Class** type_info = (app::VerletStructure_VerletLink__Class**)(modloader::win::memory::resolve_rva(0x04790F98));
        inline app::VerletStructure_VerletLink__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletLink__Class>(type_info, "", "VerletStructure", "VerletLink");
        }
        inline app::VerletStructure_VerletLink* create() {
            return il2cpp::create_object<app::VerletStructure_VerletLink>(get_class());
        }
        inline app::VerletStructure_VerletLink__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_VerletLink__Array>(get_class(), size);
        }
        inline app::VerletStructure_VerletLink__Array* create_array(const std::vector<app::VerletStructure_VerletLink*>& items) {
            return il2cpp::array_new<app::VerletStructure_VerletLink__Array>(get_class(), items);
        }
    } // namespace VerletStructure_VerletLink
} // namespace app::classes::types
