#pragma once
#include <Modloader/app/structs/IRecordable__Array.h>
#include <Modloader/app/structs/IRecordable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecordable__Array {
        inline app::IRecordable__Array__Class** type_info() {
            static app::IRecordable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRecordable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRecordable__Array__Class* get_class() {
            return il2cpp::get_class<app::IRecordable__Array__Class>(type_info(), "", "IRecordable[]");
        }
        inline app::IRecordable__Array* create() {
            return il2cpp::create_object<app::IRecordable__Array>(get_class());
        }
    } // namespace IRecordable__Array
} // namespace app::classes::types
