#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LianaPlaceholder__Class.h>
#include <Modloader/app/structs/LianaPlaceholder.h>

namespace app::classes::types {
    namespace LianaPlaceholder {
        namespace {
            inline app::LianaPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LianaPlaceholder__Class** type_info = &type_info_ref;
        inline app::LianaPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LianaPlaceholder__Class>(type_info, "", "LianaPlaceholder");
        }
        inline app::LianaPlaceholder* create() {
            return il2cpp::create_object<app::LianaPlaceholder>(get_class());
        }
    } // namespace LianaPlaceholder
} // namespace app::classes::types
