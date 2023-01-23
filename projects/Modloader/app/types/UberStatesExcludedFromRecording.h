#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStatesExcludedFromRecording__Class.h>
#include <Modloader/app/structs/UberStatesExcludedFromRecording.h>

namespace app::classes::types {
    namespace UberStatesExcludedFromRecording {
        namespace {
            inline app::UberStatesExcludedFromRecording__Class* type_info_ref = nullptr;
        }
        inline app::UberStatesExcludedFromRecording__Class** type_info = &type_info_ref;
        inline app::UberStatesExcludedFromRecording__Class* get_class() {
            return il2cpp::get_class<app::UberStatesExcludedFromRecording__Class>(type_info, "", "UberStatesExcludedFromRecording");
        }
        inline app::UberStatesExcludedFromRecording* create() {
            return il2cpp::create_object<app::UberStatesExcludedFromRecording>(get_class());
        }
    } // namespace UberStatesExcludedFromRecording
} // namespace app::classes::types
