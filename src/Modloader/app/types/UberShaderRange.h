#pragma once
#include <Modloader/app/structs/UberShaderRange.h>
#include <Modloader/app/structs/UberShaderRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRange {
        inline app::UberShaderRange__Class** type_info() {
            static app::UberShaderRange__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderRange__Class**)(modloader::win::memory::resolve_rva(0x047180C0));
            }
            return cache;
        }
        inline app::UberShaderRange__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRange__Class>(type_info(), "", "UberShaderRange");
        }
        inline app::UberShaderRange* create() {
            return il2cpp::create_object<app::UberShaderRange>(get_class());
        }
    } // namespace UberShaderRange
} // namespace app::classes::types
