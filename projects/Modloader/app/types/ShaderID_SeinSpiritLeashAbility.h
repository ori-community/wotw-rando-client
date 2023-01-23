#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_SeinSpiritLeashAbility__Class.h>
#include <Modloader/app/structs/ShaderID_SeinSpiritLeashAbility.h>

namespace app::classes::types {
    namespace ShaderID_SeinSpiritLeashAbility {
        inline app::ShaderID_SeinSpiritLeashAbility__Class** type_info = (app::ShaderID_SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04775A38));
        inline app::ShaderID_SeinSpiritLeashAbility__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinSpiritLeashAbility__Class>(type_info, "", "ShaderID_SeinSpiritLeashAbility");
        }
        inline app::ShaderID_SeinSpiritLeashAbility* create() {
            return il2cpp::create_object<app::ShaderID_SeinSpiritLeashAbility>(get_class());
        }
    } // namespace ShaderID_SeinSpiritLeashAbility
} // namespace app::classes::types
