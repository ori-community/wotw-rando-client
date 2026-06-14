#pragma once
#include <Modloader/app/structs/UberShaderPrewarmer.h>
#include <Modloader/app/structs/UberShaderPrewarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer {
        inline app::UberShaderPrewarmer__Class** type_info() {
            static app::UberShaderPrewarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04723C58));
            }
            return cache;
        }
        inline app::UberShaderPrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmer__Class>(type_info(), "", "UberShaderPrewarmer");
        }
        inline app::UberShaderPrewarmer* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer>(get_class());
        }
    } // namespace UberShaderPrewarmer
} // namespace app::classes::types
