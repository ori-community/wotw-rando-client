#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ingest {
        namespace {
            inline app::Ingest__Class* type_info_ref = nullptr;
        }
        inline app::Ingest__Class** type_info = &type_info_ref;
        inline app::Ingest__Class* get_class() {
            return il2cpp::get_class<app::Ingest__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Ingest");
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
