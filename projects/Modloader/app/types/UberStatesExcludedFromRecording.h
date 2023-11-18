#pragma once
#include <Modloader/app/structs/UberStatesExcludedFromRecording.h>
#include <Modloader/app/structs/UberStatesExcludedFromRecording__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStatesExcludedFromRecording {
        inline app::UberStatesExcludedFromRecording__Class** type_info() {
            static app::UberStatesExcludedFromRecording__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStatesExcludedFromRecording__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStatesExcludedFromRecording__Class* get_class() {
            return il2cpp::get_class<app::UberStatesExcludedFromRecording__Class>(type_info(), "", "UberStatesExcludedFromRecording");
        }
        inline app::UberStatesExcludedFromRecording* create() {
            return il2cpp::create_object<app::UberStatesExcludedFromRecording>(get_class());
        }
    } // namespace UberStatesExcludedFromRecording
} // namespace app::classes::types
