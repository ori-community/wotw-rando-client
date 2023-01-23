#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int32Ptr__Class.h>
#include <Modloader/app/structs/Int32Ptr.h>

namespace app::classes::types {
    namespace Int32Ptr {
        namespace {
            inline app::Int32Ptr__Class* type_info_ref = nullptr;
        }
        inline app::Int32Ptr__Class** type_info = &type_info_ref;
        inline app::Int32Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int32Ptr__Class>(type_info, "System", "Int32*");
        }
        inline app::Int32Ptr* create() {
            return il2cpp::create_object<app::Int32Ptr>(get_class());
        }
    } // namespace Int32Ptr
} // namespace app::classes::types
