#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BossCameraTarget__Class.h>
#include <Modloader/app/structs/BossCameraTarget.h>

namespace app::classes::types {
    namespace BossCameraTarget {
        namespace {
            inline app::BossCameraTarget__Class* type_info_ref = nullptr;
        }
        inline app::BossCameraTarget__Class** type_info = &type_info_ref;
        inline app::BossCameraTarget__Class* get_class() {
            return il2cpp::get_class<app::BossCameraTarget__Class>(type_info, "", "BossCameraTarget");
        }
        inline app::BossCameraTarget* create() {
            return il2cpp::create_object<app::BossCameraTarget>(get_class());
        }
    } // namespace BossCameraTarget
} // namespace app::classes::types
