#pragma once
#include <Modloader/app/structs/PII.h>
#include <Modloader/app/structs/PII__Array.h>
#include <Modloader/app/structs/PII__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PII {
        inline app::PII__Class** type_info() {
            static app::PII__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PII__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PII__Class* get_class() {
            return il2cpp::get_class<app::PII__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "PII");
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
