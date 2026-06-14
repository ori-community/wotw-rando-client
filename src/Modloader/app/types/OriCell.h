#pragma once
#include <Modloader/app/structs/OriCell.h>
#include <Modloader/app/structs/OriCell__Array.h>
#include <Modloader/app/structs/OriCell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriCell {
        inline app::OriCell__Class** type_info() {
            static app::OriCell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriCell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriCell__Class* get_class() {
            return il2cpp::get_class<app::OriCell__Class>(type_info(), "", "OriCell");
        }
        inline app::OriCell* create() {
            return il2cpp::create_object<app::OriCell>(get_class());
        }
        inline app::OriCell__Array* create_array(int size) {
            return il2cpp::array_new<app::OriCell__Array>(get_class(), size);
        }
        inline app::OriCell__Array* create_array(const std::vector<app::OriCell*>& items) {
            return il2cpp::array_new<app::OriCell__Array>(get_class(), items);
        }
    } // namespace OriCell
} // namespace app::classes::types
