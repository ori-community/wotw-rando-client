#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LiannaStickyTongue__Class.h>
#include <Modloader/app/structs/LiannaStickyTongue.h>

namespace app::classes::types {
    namespace LiannaStickyTongue {
        namespace {
            inline app::LiannaStickyTongue__Class* type_info_ref = nullptr;
        }
        inline app::LiannaStickyTongue__Class** type_info = &type_info_ref;
        inline app::LiannaStickyTongue__Class* get_class() {
            return il2cpp::get_class<app::LiannaStickyTongue__Class>(type_info, "", "LiannaStickyTongue");
        }
        inline app::LiannaStickyTongue* create() {
            return il2cpp::create_object<app::LiannaStickyTongue>(get_class());
        }
    } // namespace LiannaStickyTongue
} // namespace app::classes::types
