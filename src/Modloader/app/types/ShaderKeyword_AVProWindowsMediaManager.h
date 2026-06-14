#pragma once
#include <Modloader/app/structs/ShaderKeyword_AVProWindowsMediaManager.h>
#include <Modloader/app/structs/ShaderKeyword_AVProWindowsMediaManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_AVProWindowsMediaManager {
        inline app::ShaderKeyword_AVProWindowsMediaManager__Class** type_info() {
            static app::ShaderKeyword_AVProWindowsMediaManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderKeyword_AVProWindowsMediaManager__Class**)(modloader::win::memory::resolve_rva(0x0471E248));
            }
            return cache;
        }
        inline app::ShaderKeyword_AVProWindowsMediaManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_AVProWindowsMediaManager__Class>(type_info(), "", "ShaderKeyword_AVProWindowsMediaManager");
        }
        inline app::ShaderKeyword_AVProWindowsMediaManager* create() {
            return il2cpp::create_object<app::ShaderKeyword_AVProWindowsMediaManager>(get_class());
        }
    } // namespace ShaderKeyword_AVProWindowsMediaManager
} // namespace app::classes::types
