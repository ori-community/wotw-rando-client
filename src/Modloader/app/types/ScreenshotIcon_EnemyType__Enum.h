#pragma once
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum.h>
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum__Array.h>
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon_EnemyType__Enum {
        inline app::ScreenshotIcon_EnemyType__Enum__Class** type_info() {
            static app::ScreenshotIcon_EnemyType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenshotIcon_EnemyType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenshotIcon_EnemyType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenshotIcon_EnemyType__Enum__Class>(type_info(), "", "ScreenshotIcon", "EnemyType");
        }
        inline app::ScreenshotIcon_EnemyType__Enum* create() {
            return il2cpp::create_object<app::ScreenshotIcon_EnemyType__Enum>(get_class());
        }
        inline app::ScreenshotIcon_EnemyType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ScreenshotIcon_EnemyType__Enum__Array>(get_class(), size);
        }
        inline app::ScreenshotIcon_EnemyType__Enum__Array* create_array(const std::vector<app::ScreenshotIcon_EnemyType__Enum*>& items) {
            return il2cpp::array_new<app::ScreenshotIcon_EnemyType__Enum__Array>(get_class(), items);
        }
    } // namespace ScreenshotIcon_EnemyType__Enum
} // namespace app::classes::types
