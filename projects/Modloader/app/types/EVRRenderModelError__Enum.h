#pragma once
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#include <Modloader/app/structs/EVRRenderModelError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRRenderModelError__Enum {
        inline app::EVRRenderModelError__Enum__Class** type_info() {
            static app::EVRRenderModelError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRRenderModelError__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475A598));
            }
            return cache;
        }
        inline app::EVRRenderModelError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRRenderModelError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRRenderModelError");
        }
        inline app::EVRRenderModelError__Enum* create() {
            return il2cpp::create_object<app::EVRRenderModelError__Enum>(get_class());
        }
    } // namespace EVRRenderModelError__Enum
} // namespace app::classes::types
