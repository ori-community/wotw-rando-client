#pragma once
#include <Modloader/app/structs/NonSerializedAttribute.h>
#include <Modloader/app/structs/NonSerializedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonSerializedAttribute {
        inline app::NonSerializedAttribute__Class** type_info() {
            static app::NonSerializedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonSerializedAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CDF8));
            }
            return cache;
        }
        inline app::NonSerializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedAttribute__Class>(type_info(), "System", "NonSerializedAttribute");
        }
        inline app::NonSerializedAttribute* create() {
            return il2cpp::create_object<app::NonSerializedAttribute>(get_class());
        }
    } // namespace NonSerializedAttribute
} // namespace app::classes::types
