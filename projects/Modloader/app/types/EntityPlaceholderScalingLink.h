#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink__Class.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingLink {
        namespace {
            inline app::EntityPlaceholderScalingLink__Class* type_info_ref = nullptr;
        }
        inline app::EntityPlaceholderScalingLink__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholderScalingLink__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingLink__Class>(type_info, "", "EntityPlaceholderScalingLink");
        }
        inline app::EntityPlaceholderScalingLink* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingLink>(get_class());
        }
    } // namespace EntityPlaceholderScalingLink
} // namespace app::classes::types
