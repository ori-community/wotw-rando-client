#pragma once
#include <Modloader/app/structs/UberGaussianBlur.h>
#include <Modloader/app/structs/UberGaussianBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGaussianBlur {
        inline app::UberGaussianBlur__Class** type_info() {
            static app::UberGaussianBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x0471DF40));
            }
            return cache;
        }
        inline app::UberGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::UberGaussianBlur__Class>(type_info(), "", "UberGaussianBlur");
        }
        inline app::UberGaussianBlur* create() {
            return il2cpp::create_object<app::UberGaussianBlur>(get_class());
        }
    } // namespace UberGaussianBlur
} // namespace app::classes::types
