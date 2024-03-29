#pragma once
#include <Modloader/app/structs/FloatProviderZone.h>
#include <Modloader/app/structs/FloatProviderZone__Array.h>
#include <Modloader/app/structs/FloatProviderZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatProviderZone {
        inline app::FloatProviderZone__Class** type_info() {
            static app::FloatProviderZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatProviderZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatProviderZone__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderZone__Class>(type_info(), "", "FloatProviderZone");
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
