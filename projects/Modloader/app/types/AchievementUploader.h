#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementUploader__Class.h>
#include <Modloader/app/structs/AchievementUploader.h>

namespace app::classes::types {
    namespace AchievementUploader {
        inline app::AchievementUploader__Class** type_info = (app::AchievementUploader__Class**)(modloader::win::memory::resolve_rva(0x04773FB0));
        inline app::AchievementUploader__Class* get_class() {
            return il2cpp::get_class<app::AchievementUploader__Class>(type_info, "Grdk", "AchievementUploader");
        }
        inline app::AchievementUploader* create() {
            return il2cpp::create_object<app::AchievementUploader>(get_class());
        }
    } // namespace AchievementUploader
} // namespace app::classes::types
