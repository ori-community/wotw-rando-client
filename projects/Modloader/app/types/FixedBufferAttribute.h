#pragma once
#include <Modloader/app/structs/FixedBufferAttribute.h>
#include <Modloader/app/structs/FixedBufferAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedBufferAttribute {
        inline app::FixedBufferAttribute__Class** type_info() {
            static app::FixedBufferAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedBufferAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedBufferAttribute__Class* get_class() {
            return il2cpp::get_class<app::FixedBufferAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "FixedBufferAttribute");
        }
        inline app::FixedBufferAttribute* create() {
            return il2cpp::create_object<app::FixedBufferAttribute>(get_class());
        }
    } // namespace FixedBufferAttribute
} // namespace app::classes::types
