#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PurchaseContext__Class.h>
#include <Modloader/app/structs/PurchaseContext.h>
#include <Modloader/app/structs/PurchaseContext__Boxed.h>

namespace app::classes::types {
    namespace PurchaseContext {
        namespace {
            inline app::PurchaseContext__Class* type_info_ref = nullptr;
        }
        inline app::PurchaseContext__Class** type_info = &type_info_ref;
        inline app::PurchaseContext__Class* get_class() {
            return il2cpp::get_class<app::PurchaseContext__Class>(type_info, "", "PurchaseContext");
        }
        inline app::PurchaseContext* create() {
            return il2cpp::create_object<app::PurchaseContext>(get_class());
        }
        inline app::PurchaseContext__Boxed* box(app::PurchaseContext value) {
            return il2cpp::box_value<app::PurchaseContext__Boxed>(get_class(), value);
        }
    } // namespace PurchaseContext
} // namespace app::classes::types
