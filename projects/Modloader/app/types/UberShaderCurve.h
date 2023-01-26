#pragma once
#include <Modloader/app/structs/UberShaderCurve.h>
#include <Modloader/app/structs/UberShaderCurve__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCurve {
        inline app::UberShaderCurve__Class** type_info() {
            static app::UberShaderCurve__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderCurve__Class**)(modloader::win::memory::resolve_rva(0x04723990));
            }
            return cache;
        }
        inline app::UberShaderCurve__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurve__Class>(type_info(), "", "UberShaderCurve");
        }
        inline app::UberShaderCurve* create() {
            return il2cpp::create_object<app::UberShaderCurve>(get_class());
        }
    } // namespace UberShaderCurve
} // namespace app::classes::types
