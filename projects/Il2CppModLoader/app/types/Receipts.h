#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Receipts {
        namespace {
            app::Receipts__Class* type_info_ref = nullptr;
        }
        app::Receipts__Class** type_info = &type_info_ref;
        inline app::Receipts__Class* get_class() {
            return il2cpp::get_class<app::Receipts__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Receipts");
        }
        inline app::Receipts* create() {
            return il2cpp::create_object<app::Receipts>(get_class());
        }
        inline app::Receipts__Array* create_array(int size) {
            return il2cpp::array_new<app::Receipts__Array>(get_class(), size);
        }
    } // namespace Receipts
} // namespace app::classes::types
