#pragma once
#include <Modloader/app/structs/MeshValidator.h>
#include <Modloader/app/structs/MeshValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshValidator {
        inline app::MeshValidator__Class** type_info() {
            static app::MeshValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshValidator__Class**)(modloader::win::memory::resolve_rva(0x04784FA8));
            }
            return cache;
        }
        inline app::MeshValidator__Class* get_class() {
            return il2cpp::get_class<app::MeshValidator__Class>(type_info(), "TriangleNet", "MeshValidator");
        }
        inline app::MeshValidator* create() {
            return il2cpp::create_object<app::MeshValidator>(get_class());
        }
    } // namespace MeshValidator
} // namespace app::classes::types
