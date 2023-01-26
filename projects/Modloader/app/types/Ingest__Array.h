#pragma once
#include <Modloader/app/structs/Ingest__Array.h>
#include <Modloader/app/structs/Ingest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ingest__Array {
        inline app::Ingest__Array__Class** type_info() {
            static app::Ingest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ingest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ingest__Array__Class* get_class() {
            return il2cpp::get_class<app::Ingest__Array__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "Ingest[]");
        }
        inline app::Ingest__Array* create() {
            return il2cpp::create_object<app::Ingest__Array>(get_class());
        }
    } // namespace Ingest__Array
} // namespace app::classes::types
