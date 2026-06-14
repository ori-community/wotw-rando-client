#pragma once
#include <Modloader/app/structs/UberShaderVectorAnimator.h>
#include <Modloader/app/structs/UberShaderVectorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorAnimator {
        inline app::UberShaderVectorAnimator__Class** type_info() {
            static app::UberShaderVectorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderVectorAnimator__Class**)(modloader::win::memory::resolve_rva(0x0474CB38));
            }
            return cache;
        }
        inline app::UberShaderVectorAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVectorAnimator__Class>(type_info(), "Moon.Timeline", "UberShaderVectorAnimator");
        }
        inline app::UberShaderVectorAnimator* create() {
            return il2cpp::create_object<app::UberShaderVectorAnimator>(get_class());
        }
    } // namespace UberShaderVectorAnimator
} // namespace app::classes::types
