#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Receipts__Class.h>
#include <Modloader/app/structs/Receipts.h>
#include <Modloader/app/structs/Receipts__Array.h>

namespace app::classes::types {
    namespace Receipts {
        namespace {
            inline app::Receipts__Class* type_info_ref = nullptr;
        }
        inline app::Receipts__Class** type_info = &type_info_ref;
        inline app::Receipts__Class* get_class() {
            return il2cpp::get_class<app::Receipts__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Receipts");
        }
        inline app::Receipts* create() {
            return il2cpp::create_object<app::Receipts>(get_class());
        }
        inline app::Receipts__Array* create_array(int size) {
            return il2cpp::array_new<app::Receipts__Array>(get_class(), size);
        }
        inline app::Receipts__Array* create_array(const std::vector<app::Receipts*>& items) {
            return il2cpp::array_new<app::Receipts__Array>(get_class(), items);
        }
    } // namespace Receipts
} // namespace app::classes::types
