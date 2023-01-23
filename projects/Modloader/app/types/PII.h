#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PII__Class.h>
#include <Modloader/app/structs/PII.h>
#include <Modloader/app/structs/PII__Array.h>

namespace app::classes::types {
    namespace PII {
        namespace {
            inline app::PII__Class* type_info_ref = nullptr;
        }
        inline app::PII__Class** type_info = &type_info_ref;
        inline app::PII__Class* get_class() {
            return il2cpp::get_class<app::PII__Class>(type_info, "Microsoft.Applications.Events.DataModels", "PII");
        }
        inline app::PII* create() {
            return il2cpp::create_object<app::PII>(get_class());
        }
        inline app::PII__Array* create_array(int size) {
            return il2cpp::array_new<app::PII__Array>(get_class(), size);
        }
        inline app::PII__Array* create_array(const std::vector<app::PII*>& items) {
            return il2cpp::array_new<app::PII__Array>(get_class(), items);
        }
    } // namespace PII
} // namespace app::classes::types
