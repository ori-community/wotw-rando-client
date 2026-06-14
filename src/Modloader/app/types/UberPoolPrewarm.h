#pragma once
#include <Modloader/app/structs/UberPoolPrewarm.h>
#include <Modloader/app/structs/UberPoolPrewarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrewarm {
        inline app::UberPoolPrewarm__Class** type_info() {
            static app::UberPoolPrewarm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrewarm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrewarm__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarm__Class>(type_info(), "Moon.pooling", "UberPoolPrewarm");
        }
        inline app::UberPoolPrewarm* create() {
            return il2cpp::create_object<app::UberPoolPrewarm>(get_class());
        }
    } // namespace UberPoolPrewarm
} // namespace app::classes::types
