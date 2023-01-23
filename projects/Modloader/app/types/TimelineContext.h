#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineContext__Class.h>
#include <Modloader/app/structs/TimelineContext.h>

namespace app::classes::types {
    namespace TimelineContext {
        inline app::TimelineContext__Class** type_info = (app::TimelineContext__Class**)(modloader::win::memory::resolve_rva(0x04779578));
        inline app::TimelineContext__Class* get_class() {
            return il2cpp::get_class<app::TimelineContext__Class>(type_info, "Moon.Timeline", "TimelineContext");
        }
        inline app::TimelineContext* create() {
            return il2cpp::create_object<app::TimelineContext>(get_class());
        }
    } // namespace TimelineContext
} // namespace app::classes::types
