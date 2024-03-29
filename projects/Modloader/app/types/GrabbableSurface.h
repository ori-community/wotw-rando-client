#pragma once
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GrabbableSurface__Array.h>
#include <Modloader/app/structs/GrabbableSurface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurface {
        inline app::GrabbableSurface__Class** type_info() {
            static app::GrabbableSurface__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrabbableSurface__Class**)(modloader::win::memory::resolve_rva(0x04769B90));
            }
            return cache;
        }
        inline app::GrabbableSurface__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurface__Class>(type_info(), "", "GrabbableSurface");
        }
        inline app::GrabbableSurface* create() {
            return il2cpp::create_object<app::GrabbableSurface>(get_class());
        }
        inline app::GrabbableSurface__Array* create_array(int size) {
            return il2cpp::array_new<app::GrabbableSurface__Array>(get_class(), size);
        }
        inline app::GrabbableSurface__Array* create_array(const std::vector<app::GrabbableSurface*>& items) {
            return il2cpp::array_new<app::GrabbableSurface__Array>(get_class(), items);
        }
    } // namespace GrabbableSurface
} // namespace app::classes::types
