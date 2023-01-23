#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XProgression__Class.h>
#include <Modloader/app/structs/XProgression.h>

namespace app::classes::types {
    namespace XProgression {
        namespace {
            inline app::XProgression__Class* type_info_ref = nullptr;
        }
        inline app::XProgression__Class** type_info = &type_info_ref;
        inline app::XProgression__Class* get_class() {
            return il2cpp::get_class<app::XProgression__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XProgression");
        }
        inline app::XProgression* create() {
            return il2cpp::create_object<app::XProgression>(get_class());
        }
    } // namespace XProgression
} // namespace app::classes::types
