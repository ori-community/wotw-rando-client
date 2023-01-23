#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShardLogic__Class.h>
#include <Modloader/app/structs/ShardLogic.h>

namespace app::classes::types {
    namespace ShardLogic {
        namespace {
            inline app::ShardLogic__Class* type_info_ref = nullptr;
        }
        inline app::ShardLogic__Class** type_info = &type_info_ref;
        inline app::ShardLogic__Class* get_class() {
            return il2cpp::get_class<app::ShardLogic__Class>(type_info, "", "ShardLogic");
        }
        inline app::ShardLogic* create() {
            return il2cpp::create_object<app::ShardLogic>(get_class());
        }
    } // namespace ShardLogic
} // namespace app::classes::types
