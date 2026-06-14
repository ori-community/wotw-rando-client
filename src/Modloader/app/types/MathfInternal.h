#pragma once
#include <Modloader/app/structs/MathfInternal.h>
#include <Modloader/app/structs/MathfInternal__Boxed.h>
#include <Modloader/app/structs/MathfInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MathfInternal {
        inline app::MathfInternal__Class** type_info() {
            static app::MathfInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MathfInternal__Class**)(modloader::win::memory::resolve_rva(0x04777E00));
            }
            return cache;
        }
        inline app::MathfInternal__Class* get_class() {
            return il2cpp::get_class<app::MathfInternal__Class>(type_info(), "UnityEngineInternal", "MathfInternal");
        }
        inline app::MathfInternal* create() {
            return il2cpp::create_object<app::MathfInternal>(get_class());
        }
        inline app::MathfInternal__Boxed* box(app::MathfInternal value) {
            return il2cpp::box_value<app::MathfInternal__Boxed>(get_class(), value);
        }
    } // namespace MathfInternal
} // namespace app::classes::types
