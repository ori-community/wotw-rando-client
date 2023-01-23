#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Class.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Array.h>

namespace app::classes::types {
    namespace SkinningEdge_SkinningCapsule {
        inline app::SkinningEdge_SkinningCapsule__Class** type_info = (app::SkinningEdge_SkinningCapsule__Class**)(modloader::win::memory::resolve_rva(0x0474B2A8));
        inline app::SkinningEdge_SkinningCapsule__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinningEdge_SkinningCapsule__Class>(type_info, "", "SkinningEdge", "SkinningCapsule");
        }
        inline app::SkinningEdge_SkinningCapsule* create() {
            return il2cpp::create_object<app::SkinningEdge_SkinningCapsule>(get_class());
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinningEdge_SkinningCapsule__Array>(get_class(), size);
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create_array(const std::vector<app::SkinningEdge_SkinningCapsule*>& items) {
            return il2cpp::array_new<app::SkinningEdge_SkinningCapsule__Array>(get_class(), items);
        }
    } // namespace SkinningEdge_SkinningCapsule
} // namespace app::classes::types
