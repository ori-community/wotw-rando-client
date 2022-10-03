#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_SequenceEntryData {
        namespace {
            app::ServerAnimatorHelper_SequenceEntryData__Class* type_info_ref = nullptr;
        }
        app::ServerAnimatorHelper_SequenceEntryData__Class** type_info = &type_info_ref;
        inline app::ServerAnimatorHelper_SequenceEntryData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_SequenceEntryData__Class>(type_info, "", "ServerAnimatorHelper", "SequenceEntryData");
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
    } // namespace ServerAnimatorHelper_SequenceEntryData
} // namespace app::classes::types
