#pragma once
#include <Modloader/app/structs/UberShaderDetector.h>
#include <Modloader/app/structs/UberShaderDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderDetector {
        inline app::UberShaderDetector__Class** type_info() {
            static app::UberShaderDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderDetector__Class**)(modloader::win::memory::resolve_rva(0x04703110));
            }
            return cache;
        }
        inline app::UberShaderDetector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDetector__Class>(type_info(), "", "UberShaderDetector");
        }
        inline app::UberShaderDetector* create() {
            return il2cpp::create_object<app::UberShaderDetector>(get_class());
        }
    } // namespace UberShaderDetector
} // namespace app::classes::types
