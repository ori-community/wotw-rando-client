#pragma once
#include <Modloader/app/structs/DynamicMetaObject__Array.h>
#include <Modloader/app/structs/DynamicMetaObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicMetaObject__Array {
        inline app::DynamicMetaObject__Array__Class** type_info() {
            static app::DynamicMetaObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicMetaObject__Array__Class**)(modloader::win::memory::resolve_rva(0x047553A0));
            }
            return cache;
        }
        inline app::DynamicMetaObject__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObject__Array__Class>(type_info(), "System.Dynamic", "DynamicMetaObject[]");
        }
        inline app::DynamicMetaObject__Array* create() {
            return il2cpp::create_object<app::DynamicMetaObject__Array>(get_class());
        }
    } // namespace DynamicMetaObject__Array
} // namespace app::classes::types
