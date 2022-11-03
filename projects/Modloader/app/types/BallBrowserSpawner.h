#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BallBrowserSpawner {
        namespace {
            inline app::BallBrowserSpawner__Class* type_info_ref = nullptr;
        }
        inline app::BallBrowserSpawner__Class** type_info = &type_info_ref;
        inline app::BallBrowserSpawner__Class* get_class() {
            return il2cpp::get_class<app::BallBrowserSpawner__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BallBrowserSpawner");
        }
        inline app::BallBrowserSpawner* create() {
            return il2cpp::create_object<app::BallBrowserSpawner>(get_class());
        }
    } // namespace BallBrowserSpawner
} // namespace app::classes::types
