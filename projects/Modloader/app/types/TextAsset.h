#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextAsset__Class.h>
#include <Modloader/app/structs/TextAsset.h>

namespace app::classes::types {
    namespace TextAsset {
        inline app::TextAsset__Class** type_info = (app::TextAsset__Class**)(modloader::win::memory::resolve_rva(0x0470FDB0));
        inline app::TextAsset__Class* get_class() {
            return il2cpp::get_class<app::TextAsset__Class>(type_info, "UnityEngine", "TextAsset");
        }
        inline app::TextAsset* create() {
            return il2cpp::create_object<app::TextAsset>(get_class());
        }
    } // namespace TextAsset
} // namespace app::classes::types
