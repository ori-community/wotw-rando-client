#pragma once
#include <Modloader/app/structs/Recorder_ResetRecorderAndComponents_d_59.h>
#include <Modloader/app/structs/Recorder_ResetRecorderAndComponents_d_59__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recorder_ResetRecorderAndComponents_d_59 {
        inline app::Recorder_ResetRecorderAndComponents_d_59__Class** type_info() {
            static app::Recorder_ResetRecorderAndComponents_d_59__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Recorder_ResetRecorderAndComponents_d_59__Class**)(modloader::win::memory::resolve_rva(0x0472AC30));
            }
            return cache;
        }
        inline app::Recorder_ResetRecorderAndComponents_d_59__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_ResetRecorderAndComponents_d_59__Class>(type_info(), "", "Recorder", "<ResetRecorderAndComponents>d__59");
        }
        inline app::Recorder_ResetRecorderAndComponents_d_59* create() {
            return il2cpp::create_object<app::Recorder_ResetRecorderAndComponents_d_59>(get_class());
        }
    } // namespace Recorder_ResetRecorderAndComponents_d_59
} // namespace app::classes::types
