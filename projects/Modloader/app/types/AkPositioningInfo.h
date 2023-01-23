#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkPositioningInfo__Class.h>
#include <Modloader/app/structs/AkPositioningInfo.h>

namespace app::classes::types {
    namespace AkPositioningInfo {
        namespace {
            inline app::AkPositioningInfo__Class* type_info_ref = nullptr;
        }
        inline app::AkPositioningInfo__Class** type_info = &type_info_ref;
        inline app::AkPositioningInfo__Class* get_class() {
            return il2cpp::get_class<app::AkPositioningInfo__Class>(type_info, "", "AkPositioningInfo");
        }
        inline app::AkPositioningInfo* create() {
            return il2cpp::create_object<app::AkPositioningInfo>(get_class());
        }
    } // namespace AkPositioningInfo
} // namespace app::classes::types
