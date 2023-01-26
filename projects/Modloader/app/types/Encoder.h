#pragma once
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/Encoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoder {
        inline app::Encoder__Class** type_info() {
            static app::Encoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Encoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Encoder__Class* get_class() {
            return il2cpp::get_class<app::Encoder__Class>(type_info(), "System.Text", "Encoder");
        }
        inline app::Encoder* create() {
            return il2cpp::create_object<app::Encoder>(get_class());
        }
    } // namespace Encoder
} // namespace app::classes::types
