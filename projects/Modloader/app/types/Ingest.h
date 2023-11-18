#pragma once
#include <Modloader/app/structs/Ingest.h>
#include <Modloader/app/structs/Ingest__Array.h>
#include <Modloader/app/structs/Ingest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ingest {
        inline app::Ingest__Class** type_info() {
            static app::Ingest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ingest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ingest__Class* get_class() {
            return il2cpp::get_class<app::Ingest__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Ingest");
        }
        inline app::Ingest* create() {
            return il2cpp::create_object<app::Ingest>(get_class());
        }
        inline app::Ingest__Array* create_array(int size) {
            return il2cpp::array_new<app::Ingest__Array>(get_class(), size);
        }
        inline app::Ingest__Array* create_array(const std::vector<app::Ingest*>& items) {
            return il2cpp::array_new<app::Ingest__Array>(get_class(), items);
        }
    } // namespace Ingest
} // namespace app::classes::types
