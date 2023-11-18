#pragma once
#include <Modloader/app/structs/IUberStateApplier__Array.h>
#include <Modloader/app/structs/IUberStateApplier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateApplier__Array {
        inline app::IUberStateApplier__Array__Class** type_info() {
            static app::IUberStateApplier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUberStateApplier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUberStateApplier__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplier__Array__Class>(type_info(), "Moon", "IUberStateApplier[]");
        }
        inline app::IUberStateApplier__Array* create() {
            return il2cpp::create_object<app::IUberStateApplier__Array>(get_class());
        }
    } // namespace IUberStateApplier__Array
} // namespace app::classes::types
