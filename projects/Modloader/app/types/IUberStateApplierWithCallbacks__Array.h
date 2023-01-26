#pragma once
#include <Modloader/app/structs/IUberStateApplierWithCallbacks__Array.h>
#include <Modloader/app/structs/IUberStateApplierWithCallbacks__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateApplierWithCallbacks__Array {
        inline app::IUberStateApplierWithCallbacks__Array__Class** type_info() {
            static app::IUberStateApplierWithCallbacks__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUberStateApplierWithCallbacks__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUberStateApplierWithCallbacks__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplierWithCallbacks__Array__Class>(type_info(), "Moon", "IUberStateApplierWithCallbacks[]");
        }
        inline app::IUberStateApplierWithCallbacks__Array* create() {
            return il2cpp::create_object<app::IUberStateApplierWithCallbacks__Array>(get_class());
        }
    } // namespace IUberStateApplierWithCallbacks__Array
} // namespace app::classes::types
