#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AvatarImageLoaded_t__Class.h>
#include <Modloader/app/structs/AvatarImageLoaded_t.h>
#include <Modloader/app/structs/AvatarImageLoaded_t__Boxed.h>

namespace app::classes::types {
    namespace AvatarImageLoaded_t {
        namespace {
            inline app::AvatarImageLoaded_t__Class* type_info_ref = nullptr;
        }
        inline app::AvatarImageLoaded_t__Class** type_info = &type_info_ref;
        inline app::AvatarImageLoaded_t__Class* get_class() {
            return il2cpp::get_class<app::AvatarImageLoaded_t__Class>(type_info, "Steamworks", "AvatarImageLoaded_t");
        }
        inline app::AvatarImageLoaded_t* create() {
            return il2cpp::create_object<app::AvatarImageLoaded_t>(get_class());
        }
        inline app::AvatarImageLoaded_t__Boxed* box(app::AvatarImageLoaded_t value) {
            return il2cpp::box_value<app::AvatarImageLoaded_t__Boxed>(get_class(), value);
        }
    } // namespace AvatarImageLoaded_t
} // namespace app::classes::types
