#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider__Class.h>
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider.h>

namespace app::classes::types {
    namespace SpiderBossCameraTargetsProvider {
        namespace {
            inline app::SpiderBossCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::SpiderBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCameraTargetsProvider__Class>(type_info, "", "SpiderBossCameraTargetsProvider");
        }
        inline app::SpiderBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::SpiderBossCameraTargetsProvider>(get_class());
        }
    } // namespace SpiderBossCameraTargetsProvider
} // namespace app::classes::types
