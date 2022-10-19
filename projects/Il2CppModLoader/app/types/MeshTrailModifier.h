#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrailModifier {
        inline app::MeshTrailModifier__Class** type_info = (app::MeshTrailModifier__Class**)(modloader::win::memory::resolve_rva(0x0477FBE0));
        inline app::MeshTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailModifier__Class>(type_info, "", "MeshTrailModifier");
        }
        inline app::MeshTrailModifier* create() {
            return il2cpp::create_object<app::MeshTrailModifier>(get_class());
        }
        inline app::MeshTrailModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshTrailModifier__Array>(get_class(), size);
        }
        inline app::MeshTrailModifier__Array* create_array(const std::vector<app::MeshTrailModifier*>& items) {
            return il2cpp::array_new<app::MeshTrailModifier__Array>(get_class(), items);
        }
    } // namespace MeshTrailModifier
} // namespace app::classes::types
