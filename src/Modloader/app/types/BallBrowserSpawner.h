#pragma once
#include <Modloader/app/structs/BallBrowserSpawner.h>
#include <Modloader/app/structs/BallBrowserSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BallBrowserSpawner {
        inline app::BallBrowserSpawner__Class** type_info() {
            static app::BallBrowserSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BallBrowserSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BallBrowserSpawner__Class* get_class() {
            return il2cpp::get_class<app::BallBrowserSpawner__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BallBrowserSpawner");
        }
        inline app::BallBrowserSpawner* create() {
            return il2cpp::create_object<app::BallBrowserSpawner>(get_class());
        }
    } // namespace BallBrowserSpawner
} // namespace app::classes::types
