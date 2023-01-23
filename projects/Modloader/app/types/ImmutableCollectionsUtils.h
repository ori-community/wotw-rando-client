#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils__Class.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils {
        inline app::ImmutableCollectionsUtils__Class** type_info = (app::ImmutableCollectionsUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CCA0));
        inline app::ImmutableCollectionsUtils__Class* get_class() {
            return il2cpp::get_class<app::ImmutableCollectionsUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils");
        }
        inline app::ImmutableCollectionsUtils* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils>(get_class());
        }
    } // namespace ImmutableCollectionsUtils
} // namespace app::classes::types
