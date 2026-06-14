#pragma once
#include <Modloader/app/structs/IRecordingContext.h>
#include <Modloader/app/structs/IRecordingContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecordingContext {
        inline app::IRecordingContext__Class** type_info() {
            static app::IRecordingContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRecordingContext__Class**)(modloader::win::memory::resolve_rva(0x04725070));
            }
            return cache;
        }
        inline app::IRecordingContext__Class* get_class() {
            return il2cpp::get_class<app::IRecordingContext__Class>(type_info(), "Moon.Timeline", "IRecordingContext");
        }
    } // namespace IRecordingContext
} // namespace app::classes::types
