#pragma once
#include <Modloader/app/structs/ComboDataEntry.h>
#include <Modloader/app/structs/ComboDataEntry__Array.h>
#include <Modloader/app/structs/ComboDataEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboDataEntry {
        inline app::ComboDataEntry__Class** type_info() {
            static app::ComboDataEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboDataEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboDataEntry__Class* get_class() {
            return il2cpp::get_class<app::ComboDataEntry__Class>(type_info(), "Moon.ComboSystem", "ComboDataEntry");
        }
        inline app::ComboDataEntry* create() {
            return il2cpp::create_object<app::ComboDataEntry>(get_class());
        }
        inline app::ComboDataEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboDataEntry__Array>(get_class(), size);
        }
        inline app::ComboDataEntry__Array* create_array(const std::vector<app::ComboDataEntry*>& items) {
            return il2cpp::array_new<app::ComboDataEntry__Array>(get_class(), items);
        }
    } // namespace ComboDataEntry
} // namespace app::classes::types
