#pragma once
#include <Modloader/app/structs/Receipts__Array.h>
#include <Modloader/app/structs/Receipts__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Receipts__Array {
        inline app::Receipts__Array__Class** type_info() {
            static app::Receipts__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Receipts__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Receipts__Array__Class* get_class() {
            return il2cpp::get_class<app::Receipts__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Receipts[]");
        }
        inline app::Receipts__Array* create() {
            return il2cpp::create_object<app::Receipts__Array>(get_class());
        }
    } // namespace Receipts__Array
} // namespace app::classes::types
