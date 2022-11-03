#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatProviderZone {
        namespace {
            inline app::FloatProviderZone__Class* type_info_ref = nullptr;
        }
        inline app::FloatProviderZone__Class** type_info = &type_info_ref;
        inline app::FloatProviderZone__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderZone__Class>(type_info, "", "FloatProviderZone");
        }
        inline app::FloatProviderZone* create() {
            return il2cpp::create_object<app::FloatProviderZone>(get_class());
        }
        inline app::FloatProviderZone__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatProviderZone__Array>(get_class(), size);
        }
        inline app::FloatProviderZone__Array* create_array(const std::vector<app::FloatProviderZone*>& items) {
            return il2cpp::array_new<app::FloatProviderZone__Array>(get_class(), items);
        }
    } // namespace FloatProviderZone
} // namespace app::classes::types
