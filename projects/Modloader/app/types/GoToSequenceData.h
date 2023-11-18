#pragma once
#include <Modloader/app/structs/GoToSequenceData.h>
#include <Modloader/app/structs/GoToSequenceData__Array.h>
#include <Modloader/app/structs/GoToSequenceData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceData {
        inline app::GoToSequenceData__Class** type_info() {
            static app::GoToSequenceData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoToSequenceData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoToSequenceData__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceData__Class>(type_info(), "", "GoToSequenceData");
        }
        inline app::GoToSequenceData* create() {
            return il2cpp::create_object<app::GoToSequenceData>(get_class());
        }
        inline app::GoToSequenceData__Array* create_array(int size) {
            return il2cpp::array_new<app::GoToSequenceData__Array>(get_class(), size);
        }
        inline app::GoToSequenceData__Array* create_array(const std::vector<app::GoToSequenceData*>& items) {
            return il2cpp::array_new<app::GoToSequenceData__Array>(get_class(), items);
        }
    } // namespace GoToSequenceData
} // namespace app::classes::types
