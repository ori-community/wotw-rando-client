#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyUpdate_SpriteAtlasManagerUpdate__Class.h>
#include <Modloader/app/structs/EarlyUpdate_SpriteAtlasManagerUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_SpriteAtlasManagerUpdate__Boxed.h>

namespace app::classes::types {
    namespace EarlyUpdate_SpriteAtlasManagerUpdate {
        namespace {
            inline app::EarlyUpdate_SpriteAtlasManagerUpdate__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_SpriteAtlasManagerUpdate__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_SpriteAtlasManagerUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_SpriteAtlasManagerUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "SpriteAtlasManagerUpdate");
        }
        inline app::EarlyUpdate_SpriteAtlasManagerUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_SpriteAtlasManagerUpdate>(get_class());
        }
        inline app::EarlyUpdate_SpriteAtlasManagerUpdate__Boxed* box(app::EarlyUpdate_SpriteAtlasManagerUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_SpriteAtlasManagerUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_SpriteAtlasManagerUpdate
} // namespace app::classes::types
