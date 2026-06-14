#pragma once
#include <Modloader/app/structs/ShaderID_NightBerry.h>
#include <Modloader/app/structs/ShaderID_NightBerry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NightBerry {
        inline app::ShaderID_NightBerry__Class** type_info() {
            static app::ShaderID_NightBerry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_NightBerry__Class**)(modloader::win::memory::resolve_rva(0x047770A0));
            }
            return cache;
        }
        inline app::ShaderID_NightBerry__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NightBerry__Class>(type_info(), "Game", "ShaderID_NightBerry");
        }
        inline app::ShaderID_NightBerry* create() {
            return il2cpp::create_object<app::ShaderID_NightBerry>(get_class());
        }
    } // namespace ShaderID_NightBerry
} // namespace app::classes::types
