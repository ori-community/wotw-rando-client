#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vector4Ser__Array__Class.h>
#include <Modloader/app/structs/Vector4Ser__Array.h>

namespace app::classes::types {
    namespace Vector4Ser__Array {
        namespace {
            inline app::Vector4Ser__Array__Class* type_info_ref = nullptr;
        }
        inline app::Vector4Ser__Array__Class** type_info = &type_info_ref;
        inline app::Vector4Ser__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector4Ser__Array__Class>(type_info, "", "Vector4Ser[]");
        }
        inline app::Vector4Ser__Array* create() {
            return il2cpp::create_object<app::Vector4Ser__Array>(get_class());
        }
    } // namespace Vector4Ser__Array
} // namespace app::classes::types
