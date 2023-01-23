#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindArea__Class.h>
#include <Modloader/app/structs/WindArea.h>

namespace app::classes::types {
    namespace WindArea {
        namespace {
            inline app::WindArea__Class* type_info_ref = nullptr;
        }
        inline app::WindArea__Class** type_info = &type_info_ref;
        inline app::WindArea__Class* get_class() {
            return il2cpp::get_class<app::WindArea__Class>(type_info, "", "WindArea");
        }
        inline app::WindArea* create() {
            return il2cpp::create_object<app::WindArea>(get_class());
        }
    } // namespace WindArea
} // namespace app::classes::types
