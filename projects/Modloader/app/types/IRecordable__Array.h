#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecordable__Array {
        namespace {
            inline app::IRecordable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IRecordable__Array__Class** type_info = &type_info_ref;
        inline app::IRecordable__Array__Class* get_class() {
            return il2cpp::get_class<app::IRecordable__Array__Class>(type_info, "", "IRecordable[]");
        }
        inline app::IRecordable__Array* create() {
            return il2cpp::create_object<app::IRecordable__Array>(get_class());
        }
    } // namespace IRecordable__Array
} // namespace app::classes::types
