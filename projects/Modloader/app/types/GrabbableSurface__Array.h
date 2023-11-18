#pragma once
#include <Modloader/app/structs/GrabbableSurface__Array.h>
#include <Modloader/app/structs/GrabbableSurface__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurface__Array {
        inline app::GrabbableSurface__Array__Class** type_info() {
            static app::GrabbableSurface__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrabbableSurface__Array__Class**)(modloader::win::memory::resolve_rva(0x04718F20));
            }
            return cache;
        }
        inline app::GrabbableSurface__Array__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurface__Array__Class>(type_info(), "", "GrabbableSurface[]");
        }
        inline app::GrabbableSurface__Array* create() {
            return il2cpp::create_object<app::GrabbableSurface__Array>(get_class());
        }
    } // namespace GrabbableSurface__Array
} // namespace app::classes::types
