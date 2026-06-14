#pragma once
#include <Modloader/app/structs/RecordingContext.h>
#include <Modloader/app/structs/RecordingContext__Boxed.h>
#include <Modloader/app/structs/RecordingContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordingContext {
        inline app::RecordingContext__Class** type_info() {
            static app::RecordingContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecordingContext__Class**)(modloader::win::memory::resolve_rva(0x0470B0C8));
            }
            return cache;
        }
        inline app::RecordingContext__Class* get_class() {
            return il2cpp::get_class<app::RecordingContext__Class>(type_info(), "Moon.Timeline", "RecordingContext");
        }
        inline app::RecordingContext* create() {
            return il2cpp::create_object<app::RecordingContext>(get_class());
        }
        inline app::RecordingContext__Boxed* box(app::RecordingContext value) {
            return il2cpp::box_value<app::RecordingContext__Boxed>(get_class(), value);
        }
    } // namespace RecordingContext
} // namespace app::classes::types
