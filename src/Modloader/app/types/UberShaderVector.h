#pragma once
#include <Modloader/app/structs/UberShaderVector.h>
#include <Modloader/app/structs/UberShaderVector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderVector {
        inline app::UberShaderVector__Class** type_info() {
            static app::UberShaderVector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderVector__Class**)(modloader::win::memory::resolve_rva(0x0473D098));
            }
            return cache;
        }
        inline app::UberShaderVector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVector__Class>(type_info(), "", "UberShaderVector");
        }
        inline app::UberShaderVector* create() {
            return il2cpp::create_object<app::UberShaderVector>(get_class());
        }
    } // namespace UberShaderVector
} // namespace app::classes::types
