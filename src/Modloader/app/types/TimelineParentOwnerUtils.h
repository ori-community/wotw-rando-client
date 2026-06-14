#pragma once
#include <Modloader/app/structs/TimelineParentOwnerUtils.h>
#include <Modloader/app/structs/TimelineParentOwnerUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineParentOwnerUtils {
        inline app::TimelineParentOwnerUtils__Class** type_info() {
            static app::TimelineParentOwnerUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineParentOwnerUtils__Class**)(modloader::win::memory::resolve_rva(0x04734B80));
            }
            return cache;
        }
        inline app::TimelineParentOwnerUtils__Class* get_class() {
            return il2cpp::get_class<app::TimelineParentOwnerUtils__Class>(type_info(), "", "TimelineParentOwnerUtils");
        }
        inline app::TimelineParentOwnerUtils* create() {
            return il2cpp::create_object<app::TimelineParentOwnerUtils>(get_class());
        }
    } // namespace TimelineParentOwnerUtils
} // namespace app::classes::types
