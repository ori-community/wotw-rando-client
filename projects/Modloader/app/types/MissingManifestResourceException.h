#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingManifestResourceException {
        inline app::MissingManifestResourceException__Class** type_info = (app::MissingManifestResourceException__Class**)(modloader::win::memory::resolve_rva(0x04730338));
        inline app::MissingManifestResourceException__Class* get_class() {
            return il2cpp::get_class<app::MissingManifestResourceException__Class>(type_info, "System.Resources", "MissingManifestResourceException");
        }
        inline app::MissingManifestResourceException* create() {
            return il2cpp::create_object<app::MissingManifestResourceException>(get_class());
        }
    } // namespace MissingManifestResourceException
} // namespace app::classes::types
