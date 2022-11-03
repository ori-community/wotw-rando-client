#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailEmitter {
        inline app::MeshTrail_MeshTrailEmitter__Class** type_info = (app::MeshTrail_MeshTrailEmitter__Class**)(modloader::win::memory::resolve_rva(0x04717780));
        inline app::MeshTrail_MeshTrailEmitter__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailEmitter__Class>(type_info, "", "MeshTrail", "MeshTrailEmitter");
        }
        inline app::MeshTrail_MeshTrailEmitter* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailEmitter>(get_class());
        }
        inline app::MeshTrail_MeshTrailEmitter__Boxed* box(app::MeshTrail_MeshTrailEmitter value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailEmitter__Boxed>(get_class(), value);
        }
        inline app::MeshTrail_MeshTrailEmitter__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshTrail_MeshTrailEmitter__Array>(get_class(), size);
        }
        inline app::MeshTrail_MeshTrailEmitter__Array* create_array(const std::vector<app::MeshTrail_MeshTrailEmitter>& items) {
            return il2cpp::array_new<app::MeshTrail_MeshTrailEmitter__Array>(get_class(), items);
        }
    } // namespace MeshTrail_MeshTrailEmitter
} // namespace app::classes::types
