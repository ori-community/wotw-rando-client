#pragma once
#include <Modloader/app/structs/EColorSpace__Enum.h>
#include <Modloader/app/structs/EColorSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EColorSpace__Enum {
        inline app::EColorSpace__Enum__Class** type_info() {
            static app::EColorSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EColorSpace__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477C0E8));
            }
            return cache;
        }
        inline app::EColorSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::EColorSpace__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EColorSpace");
        }
        inline app::EColorSpace__Enum* create() {
            return il2cpp::create_object<app::EColorSpace__Enum>(get_class());
        }
    } // namespace EColorSpace__Enum
} // namespace app::classes::types
