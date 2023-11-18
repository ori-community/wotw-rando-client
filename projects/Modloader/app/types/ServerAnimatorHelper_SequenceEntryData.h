#pragma once
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData.h>
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData__Array.h>
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData__Boxed.h>
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_SequenceEntryData {
        inline app::ServerAnimatorHelper_SequenceEntryData__Class** type_info() {
            static app::ServerAnimatorHelper_SequenceEntryData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerAnimatorHelper_SequenceEntryData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_SequenceEntryData__Class>(type_info(), "", "ServerAnimatorHelper", "SequenceEntryData");
        }
        inline app::ServerAnimatorHelper_SequenceEntryData* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_SequenceEntryData>(get_class());
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Boxed* box(app::ServerAnimatorHelper_SequenceEntryData value) {
            return il2cpp::box_value<app::ServerAnimatorHelper_SequenceEntryData__Boxed>(get_class(), value);
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerAnimatorHelper_SequenceEntryData__Array>(get_class(), size);
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Array* create_array(const std::vector<app::ServerAnimatorHelper_SequenceEntryData>& items) {
            return il2cpp::array_new<app::ServerAnimatorHelper_SequenceEntryData__Array>(get_class(), items);
        }
    } // namespace ServerAnimatorHelper_SequenceEntryData
} // namespace app::classes::types
