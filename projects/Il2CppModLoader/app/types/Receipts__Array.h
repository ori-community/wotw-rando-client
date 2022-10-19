#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Receipts__Array {
        namespace {
            inline app::Receipts__Array__Class* type_info_ref = nullptr;
        }
        inline app::Receipts__Array__Class** type_info = &type_info_ref;
        inline app::Receipts__Array__Class* get_class() {
            return il2cpp::get_class<app::Receipts__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Receipts[]");
        }
        inline app::Receipts__Array* create() {
            return il2cpp::create_object<app::Receipts__Array>(get_class());
        }
    } // namespace Receipts__Array
} // namespace app::classes::types
