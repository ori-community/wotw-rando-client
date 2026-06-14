#pragma once
#include <Modloader/app/structs/Entry.h>
#include <Modloader/app/structs/Entry__Array.h>
#include <Modloader/app/structs/Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entry {
        inline app::Entry__Class** type_info() {
            static app::Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Entry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Entry__Class* get_class() {
            return il2cpp::get_class<app::Entry__Class>(type_info(), "Moon.Race.Networking", "Entry");
        }
        inline app::Entry* create() {
            return il2cpp::create_object<app::Entry>(get_class());
        }
        inline app::Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::Entry__Array>(get_class(), size);
        }
        inline app::Entry__Array* create_array(const std::vector<app::Entry*>& items) {
            return il2cpp::array_new<app::Entry__Array>(get_class(), items);
        }
    } // namespace Entry
} // namespace app::classes::types
