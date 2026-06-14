#pragma once
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/Atlas__Array.h>
#include <Modloader/app/structs/Atlas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Atlas {
        inline app::Atlas__Class** type_info() {
            static app::Atlas__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Atlas__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Atlas__Class* get_class() {
            return il2cpp::get_class<app::Atlas__Class>(type_info(), "", "Atlas");
        }
        inline app::Atlas* create() {
            return il2cpp::create_object<app::Atlas>(get_class());
        }
        inline app::Atlas__Array* create_array(int size) {
            return il2cpp::array_new<app::Atlas__Array>(get_class(), size);
        }
        inline app::Atlas__Array* create_array(const std::vector<app::Atlas*>& items) {
            return il2cpp::array_new<app::Atlas__Array>(get_class(), items);
        }
    } // namespace Atlas
} // namespace app::classes::types
