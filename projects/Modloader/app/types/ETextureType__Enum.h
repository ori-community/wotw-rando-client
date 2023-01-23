#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ETextureType__Enum__Class.h>
#include <Modloader/app/structs/ETextureType__Enum.h>

namespace app::classes::types {
    namespace ETextureType__Enum {
        inline app::ETextureType__Enum__Class** type_info = (app::ETextureType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D418));
        inline app::ETextureType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETextureType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETextureType");
        }
        inline app::ETextureType__Enum* create() {
            return il2cpp::create_object<app::ETextureType__Enum>(get_class());
        }
    } // namespace ETextureType__Enum
} // namespace app::classes::types
