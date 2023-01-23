#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEntry__Array__Class.h>
#include <Modloader/app/structs/IEntry__Array.h>

namespace app::classes::types {
    namespace IEntry__Array {
        namespace {
            inline app::IEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEntry__Array__Class** type_info = &type_info_ref;
        inline app::IEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntry__Array__Class>(type_info, "", "IEntry[]");
        }
        inline app::IEntry__Array* create() {
            return il2cpp::create_object<app::IEntry__Array>(get_class());
        }
    } // namespace IEntry__Array
} // namespace app::classes::types
