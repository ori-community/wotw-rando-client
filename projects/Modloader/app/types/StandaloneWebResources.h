#pragma once
#include <Modloader/app/structs/StandaloneWebResources.h>
#include <Modloader/app/structs/StandaloneWebResources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandaloneWebResources {
        inline app::StandaloneWebResources__Class** type_info() {
            static app::StandaloneWebResources__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StandaloneWebResources__Class**)(modloader::win::memory::resolve_rva(0x04702998));
            }
            return cache;
        }
        inline app::StandaloneWebResources__Class* get_class() {
            return il2cpp::get_class<app::StandaloneWebResources__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources");
        }
        inline app::StandaloneWebResources* create() {
            return il2cpp::create_object<app::StandaloneWebResources>(get_class());
        }
    } // namespace StandaloneWebResources
} // namespace app::classes::types
