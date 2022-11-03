#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSegmentInfo {
        namespace {
            inline app::AkSegmentInfo__Class* type_info_ref = nullptr;
        }
        inline app::AkSegmentInfo__Class** type_info = &type_info_ref;
        inline app::AkSegmentInfo__Class* get_class() {
            return il2cpp::get_class<app::AkSegmentInfo__Class>(type_info, "", "AkSegmentInfo");
        }
        inline app::AkSegmentInfo* create() {
            return il2cpp::create_object<app::AkSegmentInfo>(get_class());
        }
    } // namespace AkSegmentInfo
} // namespace app::classes::types
