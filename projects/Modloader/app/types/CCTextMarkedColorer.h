#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCTextMarkedColorer__Class.h>
#include <Modloader/app/structs/CCTextMarkedColorer.h>

namespace app::classes::types {
    namespace CCTextMarkedColorer {
        namespace {
            inline app::CCTextMarkedColorer__Class* type_info_ref = nullptr;
        }
        inline app::CCTextMarkedColorer__Class** type_info = &type_info_ref;
        inline app::CCTextMarkedColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextMarkedColorer__Class>(type_info, "", "CCTextMarkedColorer");
        }
        inline app::CCTextMarkedColorer* create() {
            return il2cpp::create_object<app::CCTextMarkedColorer>(get_class());
        }
    } // namespace CCTextMarkedColorer
} // namespace app::classes::types
