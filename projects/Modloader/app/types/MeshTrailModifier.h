#pragma once
#include <Modloader/app/structs/MeshTrailModifier.h>
#include <Modloader/app/structs/MeshTrailModifier__Array.h>
#include <Modloader/app/structs/MeshTrailModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrailModifier {
        inline app::MeshTrailModifier__Class** type_info() {
            static app::MeshTrailModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshTrailModifier__Class**)(modloader::win::memory::resolve_rva(0x0477FBE0));
            }
            return cache;
        }
        inline app::MeshTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailModifier__Class>(type_info(), "", "MeshTrailModifier");
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
