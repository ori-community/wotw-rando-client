#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_NightberryPlaceholder__Class.h>
#include <Modloader/app/structs/ShaderID_NightberryPlaceholder.h>

namespace app::classes::types {
    namespace ShaderID_NightberryPlaceholder {
        inline app::ShaderID_NightberryPlaceholder__Class** type_info = (app::ShaderID_NightberryPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04774E70));
        inline app::ShaderID_NightberryPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NightberryPlaceholder__Class>(type_info, "", "ShaderID_NightberryPlaceholder");
        }
        inline app::ShaderID_NightberryPlaceholder* create() {
            return il2cpp::create_object<app::ShaderID_NightberryPlaceholder>(get_class());
        }
    } // namespace ShaderID_NightberryPlaceholder
} // namespace app::classes::types
