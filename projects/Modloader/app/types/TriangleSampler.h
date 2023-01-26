#pragma once
#include <Modloader/app/structs/TriangleSampler.h>
#include <Modloader/app/structs/TriangleSampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriangleSampler {
        inline app::TriangleSampler__Class** type_info() {
            static app::TriangleSampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriangleSampler__Class**)(modloader::win::memory::resolve_rva(0x04730F48));
            }
            return cache;
        }
        inline app::TriangleSampler__Class* get_class() {
            return il2cpp::get_class<app::TriangleSampler__Class>(type_info(), "TriangleNet", "TriangleSampler");
        }
        inline app::TriangleSampler* create() {
            return il2cpp::create_object<app::TriangleSampler>(get_class());
        }
    } // namespace TriangleSampler
} // namespace app::classes::types
