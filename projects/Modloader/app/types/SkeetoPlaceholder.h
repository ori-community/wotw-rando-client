#pragma once
#include <Modloader/app/structs/SkeetoPlaceholder.h>
#include <Modloader/app/structs/SkeetoPlaceholder__Array.h>
#include <Modloader/app/structs/SkeetoPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoPlaceholder {
        inline app::SkeetoPlaceholder__Class** type_info() {
            static app::SkeetoPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPlaceholder__Class>(type_info(), "", "SkeetoPlaceholder");
        }
        inline app::SkeetoPlaceholder* create() {
            return il2cpp::create_object<app::SkeetoPlaceholder>(get_class());
        }
        inline app::SkeetoPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::SkeetoPlaceholder__Array>(get_class(), size);
        }
        inline app::SkeetoPlaceholder__Array* create_array(const std::vector<app::SkeetoPlaceholder*>& items) {
            return il2cpp::array_new<app::SkeetoPlaceholder__Array>(get_class(), items);
        }
    } // namespace SkeetoPlaceholder
} // namespace app::classes::types
