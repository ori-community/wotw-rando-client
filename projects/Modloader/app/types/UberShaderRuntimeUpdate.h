#pragma once
#include <Modloader/app/structs/UberShaderRuntimeUpdate.h>
#include <Modloader/app/structs/UberShaderRuntimeUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeUpdate {
        inline app::UberShaderRuntimeUpdate__Class** type_info() {
            static app::UberShaderRuntimeUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderRuntimeUpdate__Class**)(modloader::win::memory::resolve_rva(0x0472D760));
            }
            return cache;
        }
        inline app::UberShaderRuntimeUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeUpdate__Class>(type_info(), "", "UberShaderRuntimeUpdate");
        }
        inline app::UberShaderRuntimeUpdate* create() {
            return il2cpp::create_object<app::UberShaderRuntimeUpdate>(get_class());
        }
    } // namespace UberShaderRuntimeUpdate
} // namespace app::classes::types
