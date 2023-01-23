#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LianaEntity_LianaParameters__Class.h>
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#include <Modloader/app/structs/LianaEntity_LianaParameters__Boxed.h>

namespace app::classes::types {
    namespace LianaEntity_LianaParameters {
        namespace {
            inline app::LianaEntity_LianaParameters__Class* type_info_ref = nullptr;
        }
        inline app::LianaEntity_LianaParameters__Class** type_info = &type_info_ref;
        inline app::LianaEntity_LianaParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::LianaEntity_LianaParameters__Class>(type_info, "", "LianaEntity", "LianaParameters");
        }
        inline app::LianaEntity_LianaParameters* create() {
            return il2cpp::create_object<app::LianaEntity_LianaParameters>(get_class());
        }
        inline app::LianaEntity_LianaParameters__Boxed* box(app::LianaEntity_LianaParameters value) {
            return il2cpp::box_value<app::LianaEntity_LianaParameters__Boxed>(get_class(), value);
        }
    } // namespace LianaEntity_LianaParameters
} // namespace app::classes::types
