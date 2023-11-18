#pragma once
#include <Modloader/app/structs/SpiritSentry__Array.h>
#include <Modloader/app/structs/SpiritSentry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritSentry__Array {
        inline app::SpiritSentry__Array__Class** type_info() {
            static app::SpiritSentry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritSentry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritSentry__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritSentry__Array__Class>(type_info(), "", "SpiritSentry[]");
        }
        inline app::SpiritSentry__Array* create() {
            return il2cpp::create_object<app::SpiritSentry__Array>(get_class());
        }
    } // namespace SpiritSentry__Array
} // namespace app::classes::types
