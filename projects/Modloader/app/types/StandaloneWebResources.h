#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StandaloneWebResources__Class.h>
#include <Modloader/app/structs/StandaloneWebResources.h>

namespace app::classes::types {
    namespace StandaloneWebResources {
        inline app::StandaloneWebResources__Class** type_info = (app::StandaloneWebResources__Class**)(modloader::win::memory::resolve_rva(0x04702998));
        inline app::StandaloneWebResources__Class* get_class() {
            return il2cpp::get_class<app::StandaloneWebResources__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources");
        }
        inline app::StandaloneWebResources* create() {
            return il2cpp::create_object<app::StandaloneWebResources>(get_class());
        }
    } // namespace StandaloneWebResources
} // namespace app::classes::types
