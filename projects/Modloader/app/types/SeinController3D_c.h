#pragma once
#include <Modloader/app/structs/SeinController3D_c.h>
#include <Modloader/app/structs/SeinController3D_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinController3D_c {
        inline app::SeinController3D_c__Class** type_info() {
            static app::SeinController3D_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinController3D_c__Class**)(modloader::win::memory::resolve_rva(0x047562A0));
            }
            return cache;
        }
        inline app::SeinController3D_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinController3D_c__Class>(type_info(), "", "SeinController3D", "<>c");
        }
        inline app::SeinController3D_c* create() {
            return il2cpp::create_object<app::SeinController3D_c>(get_class());
        }
    } // namespace SeinController3D_c
} // namespace app::classes::types
