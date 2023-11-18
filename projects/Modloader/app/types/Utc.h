#pragma once
#include <Modloader/app/structs/Utc.h>
#include <Modloader/app/structs/Utc__Array.h>
#include <Modloader/app/structs/Utc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utc {
        inline app::Utc__Class** type_info() {
            static app::Utc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Utc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Utc__Class* get_class() {
            return il2cpp::get_class<app::Utc__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Utc");
        }
        inline app::Utc* create() {
            return il2cpp::create_object<app::Utc>(get_class());
        }
        inline app::Utc__Array* create_array(int size) {
            return il2cpp::array_new<app::Utc__Array>(get_class(), size);
        }
        inline app::Utc__Array* create_array(const std::vector<app::Utc*>& items) {
            return il2cpp::array_new<app::Utc__Array>(get_class(), items);
        }
    } // namespace Utc
} // namespace app::classes::types
